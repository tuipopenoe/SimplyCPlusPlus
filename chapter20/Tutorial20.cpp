// Tui Popenoe
// Tutorial 20

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <exception>

using namespace std;

double calculateMonthlyPayment(double, int, int);
void processData(int, int, double);

int main(){
    int price;
    int downPayment;
    double interest;
    bool errorOccurred = false;

    string invalidInput;

    do{
        try{
            cin.exceptions(ios_base::failbit);

            cout << "\nEnter the car price";
            cin >> price;

            errorOccurred = false;
        }
        catch(ios_base::failure &inputError){
            cin.clear();

            getline(cin, invalidInput);

            errorOccurred = true;

            cout << "\nError: Please enter an integer for the car price"<<endl;
        }
    }
    while(errorOccurred == true);

    cout << "Enter the downPayment: ";
    cin >> downPayment;

    cout << "Enter the annual interest rate: ";
    cin >> interest;

    processData(price, downPayment, interest);

    return 0;
}