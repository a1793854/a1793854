#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <stdio.h>
#include <iostream>
#include <vector>

class ReduceGeneric{

    private:
    virtual int binaryOperator(int x, int y) = 0;

    public:
    int reduce(std::vector<int> myVector);

};

#endif
