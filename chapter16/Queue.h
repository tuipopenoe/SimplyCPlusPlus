// Tui Popenoe
// Queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue{
    public:
        Queue();

        void setHead(Node *);
        Node *getHead();
        void setTail(Node *);
        Node *getTail();

        void addNode(string);
        void displayNextNode();
        void deleteQueue();

    private:
        Node *head;
        Node *tail;
};

#endif