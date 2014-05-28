// Tui Popenoe
// ShoppingItem.h

#ifndef SHOPPINGITEM_H
#define SHOPPINGITEM_H
#endif

#include <string>

class ShoppingItem{
    public:
        ShoppingItem(string &, int, ShoppingItem *);

        void setName(string &);
        void setQuantity(int);
        void setNextItem(ShoppingItem *);

        string getName();
        int getQuantity();
        ShoppingItem *getNextItem();

        void display();

    private:
        string name;
        int quantity;
        ShoppingItem *next;
}