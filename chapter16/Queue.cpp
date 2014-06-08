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

void Queue::addNode(string& nodeName){
    Node *newNode = new Node(nodeName);

    newNode->setNextItem(getTail());
    setTail(newNode);
}

void Queue::displayNextNode(){
    Node *currentNode = getTail();

    cout << "BakeryQueue" << endl;
    cout << "-----------" << endl;

    while(currentItem != 0){
        currentNode->display();
        currentNode = currentNode.getNextItem();
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