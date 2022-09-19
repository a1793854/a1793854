#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;

int main(void){

    MapGeneric* p1 = new MapTriple();
    MapGeneric* p1_1 = new MapAbsoluteValue();
    FilterGeneric* p2 = new FilterForTwoDigitPositive();
    FilterGeneric* p3 = new FilterOdd();
    ReduceGeneric* p4 = new ReduceMinimum();
    ReduceGeneric* p5 = new ReduceGCD();
    
    vector<int> myVector;
    myVector = {6, -15, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 25, -145, -99, 199, -156, -186, 43, -189};

    // map triple and absolute
    vector<int> a;
    a = p1->map(myVector);

    vector<int> aa;
    aa = p1_1->map(a);

    for (auto i = aa.begin() ; i < aa.end(); i++){
        cout << *i << " ";
    }

    cout << "\n";

    // select all positive two digit integers that are also odd 
    vector<int> b;
    b = p2->filter(aa);

    vector<int> ba;
    ba = p3->filter(b);

    for (auto i = ba.begin() ; i < ba.end(); i++){
        cout << *i << " ";
    }

    // compute the minimum value and the greatest common denominato
    int c;
    c = p4->reduce(ba);

    int d;
    d = p5->reduce(ba);

    cout << "\n";

    cout << c << " " << d;

}
