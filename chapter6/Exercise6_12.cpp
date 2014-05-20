// Tui Popenoe
// Exercise 6.12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateMonthlyPayment(float interest, int months, float amount);

int main(){

    float price;
    float annualInterest;
    float monthlyInterest;

    int years = 10;
    int months;
    float monthlyPayment;

    cout << "Enter mortgage amount: ";
    cin >> price;
    cout << "Enter annual interest rate: ";
    cin >> annualInterest;
    monthlyInterest = annualInterest / 1200;
    cout << "monthly: " << monthlyInterest;

    cout << "\n" << left << setw(10) << "Mortgage Length (Years)" <<
        "Monthly Payment" << endl;
    cout << fixed << setprecision(2) << endl;

    for(int i = years; years <= 30; years += 5){
        months = 12*years;

        monthlyPayment = calculateMonthlyPayment(monthlyInterest, months,
            price);

        cout << left << setw(10) << years << "$" << monthlyPayment << endl;
    }


    return 0;
}

float calculateMonthlyPayment(float interest, int months, float amount){
    float base = pow(1 + interest, months);

    return amount * interest / (1 - (1 /base));
}