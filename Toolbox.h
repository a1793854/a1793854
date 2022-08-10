#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Player.h"
#include <iostream>

class Toolbox : public Player {

 public:
    Toolbox();
    char makeMove();

};

#endif // TOOLBOX_H
