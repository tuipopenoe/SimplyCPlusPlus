// Tui Popenoe
// ShoppingItem.cpp

#include <iostream>

using namespace std;

#include "ShoppingItem.h"
#include "List.h"

int displayMenu();

int main(){

    int selection = 0;
    string itemName;
    int itemQuantity;
    List shoppingList;

    while(selection != 3){
        selection = displayMenu();

        switch(selection){
            case 1:
                cin.ignore();

                cout << "\nEnter item name: ";
                getline(cin, itemName);

                cout << "Enter quantity: ";
                cin >> itemQuantity;

                shoppingList.addItem(itemName, itemQuantity);
                break;
            case 2:
                shoppingList.displayList();
                break;
            case 3:
                shoppingList.deleteList();
                cout << endl;
                break;
            default:
                cout << "Error: Enter a valid menu selection: ";
        }
    }

    return 0;
}

int displayMenu(){
    int selection = 0;

    cout << "\nSelect one of the following options: " << endl;
    cout << "1 - Enter new item" << endl;
    cout << "2 - Display list" << endl;
    cout << "3 - Exit the application" << endl;
    cout << "Enter selection: ";
    cin >> selection;

    return selection;
}