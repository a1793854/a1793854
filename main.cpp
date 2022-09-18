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

    ReduceGeneric* p1 = new ReduceMinimum();
    
    vector<int> myVector;
    myVector.push_back(98);
    myVector.push_back(56);

    cout << p1->reduce(myVector);

    /*
    vector<int> x;
    x = p1->filter(myVector);

    for (auto i = x.begin() ; i < x.end(); i++){
            cout << *i;
        }
    */
}
