#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList(){

head = NULL;

}

void LinkedList::addFront(int newItem){

    // Initialise node
    Node *newNode = new Node; 

    // Add new item to node
    newNode->set_data(newItem);

    // Make the next new hode the head
    newNode->set_next(head);

    // Move head pointer to new node
    head = newNode;

}

void LinkedList::addEnd(int newItem){

    Node* newNode = new Node();
    newNode->set_data(newItem);

    // Make node head if empty
    if (head == NULL) {

        head = newNode;
        return;

    }
  
    // Traverse through to the end of list
    Node* temp = head;
    while (temp->get_next() != NULL) {
  
        temp = temp->get_next(); // Update temp

    }
  
    // Add to the end
    temp->set_next(newNode);

}


void LinkedList::printItems(){

    // Check if list is empty
    if (head == NULL) {

        return;

    }

    Node *temp = head;

    // Traverse through list and print
    while (temp != NULL) {

        cout << temp->get_data() << " ";
        temp = temp->get_next(); // Update temp

    }

}

void LinkedList::deleteFront(){

    // Check if list is empty 
    if (head == NULL){

        return;

    }
 
    Node* temp = head;

    // Move the head pointer to the next node
    head = head->get_next();
  
    delete temp;

}

void LinkedList::deleteEnd(){

    // Check if list is empty
    if (head == NULL){

        return;
    }
    if (head->get_next() == NULL) {

        delete head;

    }
 
    // Search for second to last node
    Node* second_last = head;
    while (second_last->get_next()->get_next() != NULL){

        second_last = second_last->get_next();

    }

    // Delete last node
    delete(second_last->get_next());
 
    // Change next of second last to null
    second_last->set_next(NULL);

}

void LinkedList::deletePosition(int position){

    // Check if list is empty
    if (head == NULL) {

        return;

    }
  
    Node *temp1 = head;
    Node *temp2 = NULL;
  
    int list_length = 0;

    // Traverse through list and find length
    while (temp1 != NULL) {

        temp1 = temp1->get_next();
        list_length++;

    }
  
    // Check if the position < 1 or it is larger than the size of the list
    if ((position < 1) || (position > list_length)){
        cout << "outside range" << endl;
        return;
    }
  
    temp1 = head; // Save pointer to head
  
    if (position == 1) {
  
        // Move head
        head = head->get_next();
        delete temp1;
        return;

    }
  
    // Traverse the list 
    while (position-- > 1) {
  
        temp2 = temp1; // temp1 Update 

        temp1 = temp1->get_next(); // temp2 Update

    }
  
    // Move previous node pointer
    temp2->set_next(temp1->get_next());
  
    // Delete the node
    delete temp1;

}