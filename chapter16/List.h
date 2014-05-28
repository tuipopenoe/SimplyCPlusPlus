// Tui Popenoe
// List.h

#ifndef LIST_H
#define LIST_H
#endif

class List{
    public:
        List();

        void setHead(ShoppingItem *);
        ShoppingItem *getHead();

        void addItem(string, int);
        void displayList();
        void deleteList();

    private:
        ShoppingItem *firstItem;
};