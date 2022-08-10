#include "Tournament.h"
using namespace std;

Tournament::Tournament() {

  p1wins = 0;
  p2wins = 0;
  Round2players = new Player*[4]; //round 2 with 4 players
  Round3players = new Player*[2]; //round 3 with 2 players
  referee = new Referee();

}

Player* Tournament::run(array<Player*, 8> competitors){ 

  //p1 vs p2
   for(int i=0; i<5; i++){
        char result = referee->refGame(competitors[0], competitors[1]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round2players[0] = competitors[0];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round2players[0] = competitors[1];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round2players[0] = competitors[0];
    p1wins = 0;
    p2wins = 0;

   }

   //p3 vs p4
   for(int i=0; i<5; i++){
        char result = referee->refGame(competitors[2], competitors[3]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round2players[1] = competitors[2];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round2players[1] = competitors[3];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round2players[1] = competitors[2];
    p1wins = 0;
    p2wins = 0;

   }

   //p5 vs p6
   for(int i=0; i<5; i++){
        char result = referee->refGame(competitors[4], competitors[5]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round2players[2] = competitors[4];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round2players[2] = competitors[5];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round2players[2] = competitors[4];
    p1wins = 0;
    p2wins = 0;

   }

   //p7 vs p8
   for(int i=0; i<5; i++){
        char result = referee->refGame(competitors[6], competitors[7]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round2players[3] = competitors[6];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round2players[3] = competitors[7];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round2players[3] = competitors[4];
    p1wins = 0;
    p2wins = 0;

   }

   //R2p1 vs R2p2
   for(int i=0; i<5; i++){
        char result = referee->refGame(Round2players[0], Round2players[1]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round3players[0] = Round2players[1];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round3players[0] = Round2players[2];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round3players[0] = Round2players[1];
    p1wins = 0;
    p2wins = 0;

   }

   //R2p3 vs R2p4
   for(int i=0; i<5; i++){
        char result = referee->refGame(Round2players[2], Round2players[3]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    Round3players[1] = Round2players[2];
    p1wins = 0;
    p2wins = 0;

   }else if (p1wins < p2wins){

    Round3players[1] = Round2players[3];
    p1wins = 0;
    p2wins = 0;

   }else {

    Round3players[1] = Round2players[2];
    p1wins = 0;
    p2wins = 0;

   }

   //R3p1 vs R3p2
   for(int i=0; i<5; i++){
        char result = referee->refGame(Round2players[2], Round2players[3]); 
            
        if (result == 'W') { 

                p1wins = p1wins + 1;

        }else if (result == 'L') {

                p2wins = p2wins + 1;

         }
   }

   if (p1wins > p2wins){

    return Round3players[0];

   }else if (p1wins < p2wins){

    return Round3players[1];

   }else {

    return Round3players[0];

   }
}

