#include "Referee.h"
using namespace std;

Referee::Referee() {
 
}

char Referee::refGame(Human player1, Computer player2) { 
    p1move = player1.makeMove();
    p2move = player2.makeMove();

    if ((p1move == 'R') && (p2move == 'R')) {

        outcome = 'T';
        
    }else if((p1move  == 'P') && (p2move == 'R')) {

        outcome = 'W';
        
    }else if((p1move == 'S') && (p2move == 'R')) {

        outcome = 'L';

    }

    cout << "\n";
    cout << outcome;
    cout << "\n";
    
    return outcome;

}
