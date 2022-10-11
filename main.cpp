#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main(void) {

    LinkedList* a = new LinkedList();

    a->addFront(1);
    a->addFront(2);
    a->addEnd(4);
    a->addEnd(3);

    cout << "Elements of the list are: ";
  
    // Print the list
    a->printItems();
    cout << endl;
}

