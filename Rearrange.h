#ifndef REARRANGE_H
#define REARRANGE_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>

class Rearrange: public Mutator {

    public:
    Individual mutate(Individual binary, int k);

};

#endif 
