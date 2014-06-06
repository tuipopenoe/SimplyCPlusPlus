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

void Queue::setHead(Node *newHead){
    head = newHead;
}

Node *Queue::getTail(){
    return tail;
}

void Queue::setTail(Node *newTail){
    tail = newTail;
}

void Queue::addItem(string itemName){
    Node *newItem = new Node(name);

    newItem->setNextItem(getTail());
    setTail(newItem);
}

void Queue::displayQueue(){
    Node *currentItem = getTail();

    cout << "BakeryQueue" << endl;
    cout << "-----------" << endl;

    while(currentItem != 0){
        currentItem->display();
        currentItem = currentItem.getNextItem();
    }
}

void Queue::deleteQueue(){
    Node *currentItem = getTail();

    while(currentItem != 0){
        Node *nextItem = currentItem->getNextItem();
        cout<<"\nMemory being released for: " << currentItem->getName() <<
            endl;

    delete currentItem;

    currentItem = nextItem;
    }
}