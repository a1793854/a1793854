#include "Computer.h"
using namespace std;

Computer::Computer() {
 
}

char Computer::makeMove() { 
    
    // computer only throws rock
    move = 'R';

    cout << move;
    cout << "\n";
    
    return move;
}
