// Tui Popenoe
// Node.cpp

#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(string &customerName, Node *nextPointer){
    setName(customerName);
    setNextNode(nextPointer);
}

void Node::setName(string &customerName){
    name = customerName;
}

string Node::getName(){
    return name;
}

void Node::setNextNode(Node *nextPointer){
    next = nextPointer;
}

Node *Node::getNextNode(){
    return next;
}