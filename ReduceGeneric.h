#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <stdio.h>
#include <iostream>
#include <vector>

class ReduceGeneric{

    private:
    int virtual binaryOperator(int x, int y);

    public:
    ReduceGeneric();
    int reduce(std::vector<int> myVector);

};

#endif
