// Tui Popenoe
// Exercise 15.11

#include <iostream>
#include "Triangle.h"

using namespace std;

int main(){
    int side1;
    int side2;
    int side3;

    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;

    Triangle currentTriangle(side1, side2, side3);

    cout << endl << endl;

    if(currentTriangle.isRightTriangle()){
        cout << "You created a right triangle!" << endl;
    }
    else if(currentTriangle.isEquilateralTriangle()){
        cout << "You created an equilateral triangle!" << endl;
    }
    else{
        cout << "Neither an equilateral nor a right triangle!" << endl;
    }

    return 0;
}