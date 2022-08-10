#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Player.h"
#include <iostream>

class PaperDoll : public Player {

 protected:     
    int count;
      
 public:
    PaperDoll();
    char makeMove();

};

#endif // PAPERDOLL_H
