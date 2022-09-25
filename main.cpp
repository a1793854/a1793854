#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

int main(void) {

Individual a("abcde");

Rearrange b;

Individual d(0);

d = b.mutate(a, 14);

cout << d.getString() << "\n";
//cout << a.getBit(0);

}

