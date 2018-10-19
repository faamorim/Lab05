//
// Created by HP User on 10/19/2018.
//

#include "rpn_calculator.hpp"
#include <iostream>
#include <sstream>

using namespace std;

// Return an Operation pointer given the char input.
// If the given char input is not a valid operation return a null pointer.
Operation * RpnCalculator::operation_type(int type) const {
    switch (type){
        case ADDITION_CODE:
            return new AdditionOperation();
        case SUBTRACTION_CODE:
            return new SubtractionOperation();
        case MULTIPLICATION_CODE:
            return new MultiplicationOperation();
        case DIVISION_CODE:
            return new DivisionOperation();
        default:
            return nullptr;
    }
}

// Removes the two top integers from the stack, and perform the current given operation on them.
// The top most element in the stack is the right had side operand,
// and the second top most element is the left hand side operand.
void RpnCalculator::Perform(Operation *op) {
    int rhs = stack.top();
    stack.pop();
    int lhs = stack.top();
    stack.pop();
    cout << "performing operation " << op->get_code() << " on operands " << lhs << " and " << rhs << "." << endl;
    stack.push(op->Perform(lhs, rhs));
}

// Reads a string input and process it in Reverse Polish Notation.
int RpnCalculator::ProcessForm(std::string form) {
    istringstream iss{form};
    string s;
    while(iss >> s){
        cout << "current input " << s;
        istringstream iss2{s};
        int i;
        char c;
        if(iss2 >> i){
            cout << " is an int." << endl;
            stack.push(i);
        }
        else{
            c = s[0];
            cout << " is a char." << endl;
            Operation *op = operation_type(c);
            if(op == nullptr){
                ostringstream error;
                error << "INVALID INPUT! CHAR " << c << " IS NOT A VALID OPERATION!";
                cerr << error.str() << endl;
                cout << error.str() << endl;
                return 0;
            }
            Perform(op);
            delete op;
        }
    }
    result = stack.top();
    stack.pop();
    return result;
}