// Tui Popenoe
// ShoppingItem.cpp

#include <iostream>
#include "ShoppingItem.h"

using namespace std;

ShoppingItem::ShoppingItem(string &itemName, int itemQuantity, ShoppingItem
    *nextPointer){
    setName(itemName);
    setQuantity(itemQuantity);
    setNextItem(nextPointer);
}

void ShoppingItem::setName(string &itemName){
    name = itemName;
}

string ShoppingItem::getName(){
    return name;
}

void ShoppingItem::setQuantity(int itemQuantity){
    if(itemQuantity < 0){
        quantity = 0;
    }
    else{
        quantity = itemQuantity;
    }
}

int ShoppingItem::getQuantity(){
    return quantity;
}

void ShoppingItem::setNextItem(ShoppingItem *nextPointer){
    next = nextPointer;
}

ShoppingItem *ShoppingItem::getNextItem(){
    return next;
}

void ShoppingItem::display(){
    cout << "\nName: " << getName() << endl;
    cout << "Quantity: " << getQuantity() << endl;
}