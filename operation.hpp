//
// Created by HP User on 10/19/2018.
//

#ifndef LAB05_OPERATIONS_HPP
#define LAB05_OPERATIONS_HPP


class Operation{
public:
    virtual char get_code() = 0;
    virtual int Perform(int, int) = 0;
    virtual ~Operation() {};
};


#endif