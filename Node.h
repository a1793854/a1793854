#ifndef NODE_H
#define NODE_H

class Node{

  private:
  int data;
  Node *next;
  
  public:
  Node();
  void set_data(int value);
  int get_data();
  void set_next(Node *nxt);
  Node* get_next();

};

#endif // NODE_H
