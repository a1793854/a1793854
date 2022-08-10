#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"
#include <iostream>

class Crescendo : public Player {

 protected:     
      int count;
      
 public:
    Crescendo();
    char makeMove();

};

#endif // CRESCENDO_H
