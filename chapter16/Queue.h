// Tui Popenoe
// Queue.h

#ifndef QUEUE_H
#define QUEUE_H

class Queue{
    public:
        Queue():

        void setHead(Node *)
        Node *getHead();
        void setTail(Node *)
        Node *getTail();

        void addItem(string, int);
        void displayQueue();
        void deleteQueue();

    private:
        Node *head;
        Node *tail;
};

