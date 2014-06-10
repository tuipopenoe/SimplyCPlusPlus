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

void Queue::addNode(string nodeName){
    Node *newNode = new Node(nodeName, 0);

    newNode->setNextNode(getTail());
    setTail(newNode);
}

void Queue::displayNextNode(){
    Node *currentNode = getTail();
    Node *tempNode;

    cout << "\nBakeryQueue" << endl;
    cout << "-----------" << endl;

    currentNode->display();
    tempNode = currentNode;
    if(currentNode != 0){
        currentNode = currentNode->getNextNode();
        if(currentNode != 0){
            setTail(currentNode);
            delete tempNode;
        }
    }
    else{

    }
}

void Queue::deleteQueue(){
    Node *currentItem = getTail();

    while(currentItem != 0){
        Node *nextItem = currentItem->getNextNode();
        cout<<"\nMemory being released for: " << currentItem->getName() <<
            endl;

    delete currentItem;

    currentItem = nextItem;
    }
}