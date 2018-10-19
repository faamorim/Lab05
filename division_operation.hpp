//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_DIVISION_OPERATION_HPP
#define LAB05_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

class DivisionOperation : public AbstractOperation{
public:
    static const char DIVISION_CODE = '/';
    // Preforms division
    int Perform(int lhs, int rhs) override {return lhs/rhs;};
    DivisionOperation() : AbstractOperation(DIVISION_CODE) {};

    virtual ~DivisionOperation(){}
};


#endif //LAB05_DIVISION_OPERATION_HPP
