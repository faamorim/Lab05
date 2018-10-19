//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_MULTIPLICATION_OPERATION_HPP
#define LAB05_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char MULTIPLICATION_CODE = '*';
class MultiplicationOperation : public AbstractOperation{
public:
    // Performs multiplication
    int Perform(int lhs, int rhs) override {return lhs*rhs;};
    MultiplicationOperation() : AbstractOperation(MULTIPLICATION_CODE) {};

    ~MultiplicationOperation() {};
};


#endif //LAB05_MULTIPLICATION_OPERATION_HPP
