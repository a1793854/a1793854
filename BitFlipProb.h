#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

class BitFlipProb: public Mutator {

    private:
    double p;

    public:
        BitFlipProb(double probability);
        Individual mutate(Individual binary, int k);

};

#endif 
