#include "Referee.h"
using namespace std;

Referee::Referee() {
 
}

char Referee::refGame(Player *player1, Player *player2) { 
    p1move = player1->makeMove();
    p2move = player2->makeMove();

    if ( (p1move == 'P' && p2move == 'R') || (p1move == 'R' && p2move == 'S') || (p1move == 'S' && p2move == 'P') ) {

        outcome = 'W'; 

    }else if ( (p2move == 'P' && p1move == 'R') || (p2move == 'R' && p1move == 'S') || (p2move == 'S' && p1move == 'P') ) {

        outcome = 'L'; 

    }else if (p1move == p2move ) {

        outcome = 'T'; 

    }

    cout << "\n";
    cout << outcome;
    cout << "\n";
    
    return outcome;

}
