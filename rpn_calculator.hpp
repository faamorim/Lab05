//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_RPN_CALCULATOR_HPP
#define LAB05_RPN_CALCULATOR_HPP

#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <string>
#include <stack>

class RpnCalculator {
public:
    int ProcessForm(std::string);
private:
    int result;
    std::stack<int> stack;
    void Perform(Operation*);
    Operation* operation_type(int) const;
};


#endif //LAB05_RPN_CALCULATOR_HPP
