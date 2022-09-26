#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <iostream>
#include <string>

class Mutator{

  public:
  virtual Individual mutate(Individual binary, int k) = 0;

};

#endif // MUTATOR_H
