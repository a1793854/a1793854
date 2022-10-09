#include "BubbleSort.h"
#include "Sort.h"
#include <vector>
using namespace std;

BubbleSort::BubbleSort(){ 
    
}

vector<int> BubbleSort::sort(vector<int> list){ 

    int temp;

    for (size_t i = 0; i < list.size(); i++){

        for (size_t  j = i + 1; j < list.size(); j++){

            // compare if next is bigger than current
            if(list.at(j) < list.at(i) ){
                
                // swap
                temp =  list.at(i);
                list.at(i) = list.at(j) ;
                list.at(j)  = temp;

            }

        }
    }

    return list;

}

