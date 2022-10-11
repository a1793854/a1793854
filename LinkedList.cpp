#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

LinkedList::LinkedList(){

head = NULL;

}

LinkedList::LinkedList(int array[], int size){

    head = NULL;

    for(int i = 0; i < size + 1; i++){
        addEnd(array[i]);
    }

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

void LinkedList::addAtPosition(int position, int newItem){

    // Check if list is empty
    if (head == NULL) {

        return;

    }

    // Counting temp to traverse
    Node *count = head;
  
    int list_length = 0;

    // Traverse through list and find length
    while (count != NULL) {

        count = count->get_next();
        list_length++;

    }
  
    // Check if the position < 1 
    if (position < 1){
        addFront(newItem);
        return;
    }

    // Check if larger than the size of the list
    if (position > list_length){
        addEnd(newItem);
        return;
    }
    
    // New node
    Node* newNode = new Node();
    newNode->set_data(newItem);
    newNode->set_next(NULL);

    // If position is one
    if (position == 1) {
  
        // Move head
        newNode->set_next(head);
        head = newNode;
        return;

    }

    Node* temp1 = head;

    // Traverse the list 
    while (position-- > 2) {

        temp1 = temp1->get_next(); // temp1 Update

    }

    newNode->set_next(temp1->get_next());
    temp1->set_next(newNode);

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

int LinkedList::search(int item){

    // Check if list is empty
    if (head == NULL) {

        return 0;

    }

    // Counting temp to traverse
    Node *count = head;

    int pos = 1;

    // Traverse through list and find position
    while (count != NULL) {

        if (count->get_data() == item){
            cout << pos << " ";
            return pos;
        }

        count = count->get_next(); // Update
        pos++;

    }
    
        cout << "0" << " ";
        return 0;

}

int LinkedList::getItem(int position){

    // Check if list is empty
    if (head == NULL) {

        return 0;

    }

    // Counting temp to traverse if bigger than array
    Node *count = head;

    int list_length = 0;

    // Traverse through list and find position
    while (count != NULL) {

        count = count->get_next(); // Update
        list_length++;

    }

    if (position > list_length){
        cout << numeric_limits <int>::max() << " ";
        return numeric_limits<int>::max();
    }

    // Counting temp to traverse
    Node *item_node = head;

    // Traverse through list and find length
    while (position-- > 1) {

        item_node = item_node->get_next(); // Update

    }

    // Print out item
    cout << item_node->get_data() << " ";
    return item_node->get_data();
}

LinkedList::~LinkedList(){
    Node *current_value = head;

    // Traverse through list and delete each item
    while (current_value  != NULL) {

        Node *temp1 = current_value->get_next(); // Save pointer to next value
        delete current_value ; // Delete 
        current_value = temp1; // Update current value

    }

    head = 0;

}