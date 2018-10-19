//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_SUBTRACTION_OPERATION_HPP
#define LAB05_SUBTRACTION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char SUBTRACTION_CODE = '-';
class SubtractionOperation : public AbstractOperation{
public:
    // Performs subtraction
    int Perform(int lhs, int rhs) override {return lhs-rhs;};
    SubtractionOperation() : AbstractOperation(SUBTRACTION_CODE) {};

    ~SubtractionOperation() {};
};


#endif //LAB05_SUBTRACTION_OPERATION_HPP
