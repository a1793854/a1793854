#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <stdio.h>
#include <iostream>
#include <vector>

class FilterGeneric{

    private:
    bool virtual g(int x);
    size_t t;

    public:
    FilterGeneric();
    std::vector<int> filter(std::vector<int> myVector);

};

#endif
