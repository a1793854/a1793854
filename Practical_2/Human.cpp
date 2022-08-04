#include "Human.h"
using namespace std;

Human::Human() {
 
}

char Human::makeMove() { 

    cout << "Make a move: R, P, or S \n\n"; 
    cin >> move;
    cout << "\n";
     
    return move;

}
