#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {

 protected:
    char move;
    std::string name;

 public:
    Player();
    virtual char makeMove();
    std::string playerName(); 

};

#endif // PLAYER_H
