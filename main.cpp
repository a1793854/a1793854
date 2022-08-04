#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(void) {

    Human x;
    Computer y;
    Referee z;

    z.refGame(x, y);

    return 0;

}

