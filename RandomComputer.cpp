#include "RandomComputer.h"
using namespace std;

RandomComputer::RandomComputer() {
    name = "RandomComputer";
}

char RandomComputer::makeMove() { 
    
    char choices[3]= {'R', 'P', 'S'}; // array of choices

    move = choices[rand() % 2]; // rng from 0 to 2
    cout << move; 
    cout << "\n";
    
    return move;
    
}
