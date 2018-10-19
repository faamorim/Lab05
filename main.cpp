#include <iostream>

#include "rpn_calculator.cpp"

int main(){
    std::cout << "Enter your formula:\n";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout << "You entered " << formula << std::endl;
    RpnCalculator calculator;
    int result = calculator.ProcessForm(formula);
    std::cout << "The result is:\n";
    std::cout <<  result << std::endl;
    system("pause");
    return 0;
}