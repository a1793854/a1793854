#include "Tournament.h"
#include "Bureaucrat.h"
#include "Avalanche.h"
#include "Player.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Toolbox.h"
#include "Human.h"
#include "Computer.h"
#include <array> 
using namespace std;

int main(void) {

    /*Player* x = new Human();
    Player* y = new FistfullODollars();
    Referee z;

    z.refGame(x, y);
    z.refGame(x, y);
    z.refGame(x, y);

    return 0; */

array<Player*,8> competitors;
Tournament b;

Player* p1 = new RandomComputer();
Player* p2 = new Avalanche();
Player* p3 = new Bureaucrat();
Player* p4 = new Toolbox();
Player* p5 = new Crescendo();
Player* p6 = new PaperDoll();
Player* p7 = new FistfullODollars(); 
Player* p8 = new Toolbox();

competitors = {p1, p2, p3, p4, p5, p6, p7, p8}; 

Player* test = b.run(competitors); 
cout << test->playerName(); 

}

