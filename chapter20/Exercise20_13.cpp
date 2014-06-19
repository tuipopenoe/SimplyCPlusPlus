// Tui Popenoe
// Exercise 20.13

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

    do{
        try{
            cin.exceptions(ios_base::failbit);

            cout << "Enter the downPayment: ";
            cin >> downPayment;

            errorOccurred = false;
        }
        catch(ios_base::failure &inputError){
            cin.clear();

            getline(cin, invalidInput);

            errorOccurred = true;

            cout << "\nError: Please enter an integer for the car price"<<endl;
        }
    }
    while(errorOccurred);
    
    do{
        try{
            cin.exceptions(ios_base::failbit);

            cout << "Enter the annual interest rate: ";
            cin >> interest;

            errorOccurred = false;
        }
        catch(ios_base::failure &inputError){
            cin.clear();

            getline(cin, invalidInput);

            errorOccurred = true;

            cout << "\nError: Please enter a double value for interest."<<endl;
        }
    }
    while(errorOccurred);

    processData(price, downPayment, interest);

    return 0;
}

void processData(int price, int downPayment, double interest){
    int loanAmount = price - downPayment;
    double monthlyInterest = interest / 1200;

    cout << fixed << setprecision(2);

    cout << endl << left << setw(10) << "Months" << "Monthly Payments" << endl;

    for(int years = 2; years <= 5; years++){
        int months = 12 * years;

        double monthlyPayment = calculateMonthlyPayment(monthlyInterest, 
            months, loanAmount);

        cout << left << setw(10) << months << "$" << monthlyPayment << endl;
    }
}

double calculateMonthlyPayment(double monthlyInterest, int months, 
    int loanAmount){
    double base = pow(1 + monthlyInterest, months);

    return loanAmount * monthlyInterest / (1 - (1/base));
}