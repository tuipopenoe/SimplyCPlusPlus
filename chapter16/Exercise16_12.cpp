// Tui Popenoe
// Exercise 16.12

#include <iostream>

#include "Node.h"
#include "Queue.h"

int displayMenu();

int main(){

    int selection = 0;
    string customerName;
    Queue bakeryList;

    while(selection != 3){
        selection = displayMenu();

        switch(selection){
            case 1:
                cin.ignore();


                cout << "\nEnter customer name: ";
                getline(cin, customerName);

                bakeryList.addNode(customerName);
                break;
            case 2:
                bakeryList.displayNextNode();
                break;
            case 3:
                bakeryList.deleteQueue();
                cout << endl;
                break;
            default:
                cout << "Error: Enter a valid menu selection";
        }
    }

    return 0;
}

int displayMenu(){
    int selection = 0;

    cout << "\nSelect one of the following options: " << endl;
    cout << "1 - Enter a new customer" << endl;
    cout << "2 - Display the next customer" << endl;
    cout << "3 - Exit the application" << endl;
    cout << "Enter selection: ";
    cin >> selection;

    return selection;
}