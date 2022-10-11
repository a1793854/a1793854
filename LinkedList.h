#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{

  private:
  Node *head;
  
  public:
  LinkedList();
  LinkedList(int array[], int size);
  void addFront(int newItem);
  void addEnd(int newItem);
  void addAtPosition(int position, int newItem);
  void deleteFront();
  void deleteEnd();
  void deletePosition(int position);
  void printItems();
  int search(int item);
  int getItem(int position);
  ~LinkedList();

};

#endif // LINKEDLIST_H
