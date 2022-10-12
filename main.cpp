#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main(void) {

    int i;
    string func;

    int nums[100];

    for(i = 0; cin >> func; i++){   
        if(func[0] < '0' || func[0] > '9')
            break;

        
        nums[i] = stoi(func);
    }

    LinkedList *list = new LinkedList(nums, i);

    switch(func[0]){

        case 'A':
        switch (func[1])
        {
            case 'F':
            cin >> nums[0];
            list->addFront(nums[0]);
            break;

            case 'E':
            cin >> nums[0];
            list->addEnd(nums[0]);
            break;

            case 'P':
            cin >> nums[0] >> nums[1];
            list->addAtPosition(nums[0], nums[1]);
            break;

        }
        break;

        case 'S':
        cin >> nums[0];
        list->search(nums[0]);
        break;

        case 'D':
        switch (func[1])
        {
            case 'F':
            list->deleteFront();
            break;

            case 'E':
            list->deleteEnd();
            break;

            case 'P':
            cin >> nums[0];
            list->deletePosition(nums[0]);
            break;

        }
        break;

        case 'G':
        cin >> nums[0];
        list->getItem(nums[0]);
        break;
    }

    list->printItems();
    cout << endl;
}

