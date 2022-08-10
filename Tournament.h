#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include "Referee.h"
#include <array>
#include <iostream>

class Tournament {

 private:
   Referee* referee;
   int p1wins;
   int p2wins;
   Player** Round2players;
   Player** Round3players;

 public:
   Tournament(); // constructor
   Player* run(std::array<Player* , 8> competitors); 

};

#endif // TOURNAMENT_H
