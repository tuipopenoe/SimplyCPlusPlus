// Tui Popenoe
// Exercise 17.12

#include <iostream>
#include <iomanip>

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

Shape createShape(int);

int main(){
    int selection = 0;

    cout << fixed << setprecision(2);

    Shape *shape = 0;

    while(selection != 3){
        cout << "Enter the shape you would like to enter: " << endl;
        cout << "1 - Triangle" << endl;
        cout << "2 - Rectangle" << endl;
        cout << "3 - Exit the application" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        switch(selection){
            case 1:
                shape = createShape(3);
                shape->print();
                break;
            case 2:
                shape = createShape(4);
                shape->print();
                break;
            case 3:
                break;
            default:
                cout << "Error: Invalid selection" << endl;
                break;
        }
    }
}