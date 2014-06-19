// Tui Popenoe
// Exercise 10.13

#include <iostream>
#include <exception>

using namespace std;

float calcMPG(float miles, float gal);

int main(){

    float miles;
    float mpg;
    float gal;

    bool errorOccurred = false;
    string invalidInput;

    do{
        try{
            cin.exceptions(ios_base::failbit);

            cout << "Enter miles driven: ";
            cin >> miles;
            cout << "Enter gallons used: ";
            cin >> gal;

            errorOccurred = true;
        }
        catch(ios_base::failure &inputError){
            cin.clear();

            getline(cin, invalidInput);

            errorOccurred = false;

            cout << "\nError: Please enter a double for the input." << endl;
        }
    }
    while(errorOccurred);

    cout << "Miles per gallon: " << calcMPG(miles, gal) << endl;

    return 0;
}

float calcMPG(float miles, float gal){
    return miles/gal;
}