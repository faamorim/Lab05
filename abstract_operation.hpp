//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_ABSTRACT_OPERATIONS_HPP
#define LAB05_ABSTRACT_OPERATIONS_HPP

#include "operation.hpp"

class AbstractOperation : public Operation{
private:
    char operation_type_;
public:
    AbstractOperation(char ot) : operation_type_(ot) {};
    char get_code() override {return operation_type_;};
    virtual ~AbstractOperation() {};
};


#endif //LAB05_ABSTRACT_OPERATIONS_HPP
