// Tui Popenoe
// Tutorial 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateMonthlyPayment(float x, int y, float z);

int main(){

    float price;
    float downPayment;
    float annualInterest;
    float monthlyInterest;

    int years = 2;
    float loanAmount;
    int months;
    float monthlyPayment;

    cout << "Enter car price: ";
    cin >> price;
    cout << "Enter down payment: ";
    cin >> downPayment;
    cout << "Enter annual interest rate: ";
    cin >> annualInterest;

    cout << "\n" << left << setw(10) << "Months" << "Monthly Payments" << endl;
    cout << endl;

    loanAmount = price - downPayment;
    monthlyInterest = annualInterest / 1200;

    cout << fixed << setprecision(2) << endl;

    while(years <= 5){
        months = 12* years;

        monthlyPayment = calculateMonthlyPayment(monthlyInterest, months,
            loanAmount);

        cout << left << setw(10) << months << "$" << monthlyPayment << endl;

        years++;
    }

    return 0;
}

float calculateMonthlyPayment(float interest, int months, float amount){
    float base = pow(1 + interest, months);

    return amount * interest / (1 - (1 /base));
}