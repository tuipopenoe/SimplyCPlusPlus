// Tui Popenoe
// Queue.cpp

#include <iostream>

using namespace std;

#include "Queue.h"

Queue::Queue(){
    setHead(0);
    setTail(0);
}

Node *Queue::getHead(){
    return head;
}

void Queue::addItem(string itemName, int quantity){
    Node *newItem = new Node(itemName, quantity, 0);
}