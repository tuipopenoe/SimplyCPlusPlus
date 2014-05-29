// Tui Popenoe
// List.cpp

#include <iostream>

using namespace std;

#include "List.h"

List::List(){
    setHead(0);
}

void List::setHead(ShoppingItem *newHead){
    head = newHead;
}

ShoppingItem *List::getHead(){
    return head;
}

void List::addItem(string itemName, int quantity){
    ShoppingItem *newItem = new ShoppingItem(itemName, quantity, 0);

    newItem->setNextItem(getHead());
    setHead(newItem);
}

void List::displayList(){
    ShoppingItem *currentItem = getHead();

    cout << "\nShopping List" << endl;
    cout << "---------------" << endl;

    while(currentItem != 0){
        currentItem->display();
        currentItem = currentItem->getNextItem();
    }
}

void List::deleteList(){
    ShoppingItem *currentItem = getHead();

    while(currentItem != 0){

        ShoppingItem *nextItem = currentItem->getNextItem();
        cout << "\nMemory being released for: " << currentItem->getName() <<
            endl;

        delete currentItem;

        currentItem = nextItem;
    }
}
