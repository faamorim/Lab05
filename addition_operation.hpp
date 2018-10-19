//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_ADDITION_OPERATION_HPP
#define LAB05_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char ADDITION_CODE = '+';
class AdditionOperation : public AbstractOperation{
public:
    // Performs addition
    int Perform(int lhs, int rhs) override {return lhs+rhs;};
    AdditionOperation() : AbstractOperation(ADDITION_CODE) {};

    ~AdditionOperation() {};
};


#endif //LAB05_ADDITION_OPERATION_HPP
