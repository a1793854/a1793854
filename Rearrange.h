#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include <iostream>
#include <string>

class Rearrange: public Mutator {

    public:
    Rearrange();
    Individual mutate(Individual binary, int k);

};

#endif 
