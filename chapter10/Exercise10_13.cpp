// Tui Popenoe
// Exercise 10.13

#include <iostream>

using namespace std;

float calcMPG(float miles, float gal);

int main(){

    float miles;
    float mpg;
    float gal;

    cout << "Enter miles driven: ";
    cin >> miles;
    cout << "Enter gallons used: ";
    cin >> gal;

    cout << "Miles per gallon: " << calcMPG(miles, gal) << endl;

    return 0;
}

float calcMPG(float miles, float gal){
    return miles/gal;
}