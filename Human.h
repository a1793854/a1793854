#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>

class Human : public Player {

 public:
    Human();
    char makeMove();

};

#endif // Human_H
