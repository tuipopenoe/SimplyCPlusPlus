// Tui Popenoe
// Node.h

#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Node{
    public:
        Node(string &, Node *);

        void setName(string &);
        void setNextNode(Node *);

        string getName();
        Node *getNextNode();

        void display();

    private:
        string name;
        Node *next;
};

#endif