#ifndef BITFLIP_H
#define BITFLIP_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>

class BitFlip: public Mutator {

    public:
    Individual mutate(Individual binary, int k);

};

#endif 
