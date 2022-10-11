#include "Node.h"
#include <iostream>
using namespace std;

Node::Node(){

    next = NULL;

}

void Node::set_data(int value){

    data = value;

}

int Node::get_data(){

    return data;

}

void Node::set_next(Node *nxt){

    next = nxt;
    
}

Node* Node::get_next(){

    return next;

}