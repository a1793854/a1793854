#ifndef MUTATOR_H
#define MUTATOR_H
#include "individual.h"
#include <iostream>
#include <string>

class Mutator{

  public:
    virtual Individual mutate(Individual binary, int k) = 0;

};

#endif // MUTATOR_H
