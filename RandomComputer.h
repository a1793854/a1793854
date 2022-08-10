#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"
#include <iostream>

class RandomComputer : public Player {
    
 public:
    RandomComputer();
    char makeMove();

};

#endif // RANDOMCOMPUTER_H
