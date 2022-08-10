#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Player.h"

class Referee {

 private:
   char outcome;
   char p1move, p2move;

 public:
   Referee(); // constructor
   char refGame(Player* player1, Player* player2); // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

};

#endif // REFEREE_H
