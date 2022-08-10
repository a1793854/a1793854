#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Player.h"
#include <iostream>

class Avalanche : public Player {

 public:
    Avalanche();
    char makeMove();

};

#endif // AVALANCHE_H
