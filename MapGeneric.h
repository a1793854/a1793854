#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <stdio.h>
#include <iostream>
#include <vector>

class MapGeneric{

    private:
    int virtual f(int x);
    size_t t;

    public:
    MapGeneric();
    std::vector<int> map(std::vector<int> myVector);

};

#endif
