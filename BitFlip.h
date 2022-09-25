#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include <iostream>
#include <string>

class BitFlip: public Mutator {

    public:
    BitFlip();
    Individual mutate(Individual binary, int k);

};

#endif 
