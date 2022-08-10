#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Player.h"
#include <iostream>

class FistfullODollars : public Player {

 protected:     
    int count;
      
 public:
    FistfullODollars();
    char makeMove();

};

#endif // FISTFULLODOLLARS_H
