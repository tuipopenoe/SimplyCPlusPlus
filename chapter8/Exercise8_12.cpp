// Tui Popenoe
// Exercise 8.12
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateInterest(float principal, float rate, int years);
void printGrowth(int years, float principal, float rate);

int main(){

    float futureValue = 0;
    float rate = 0;
    int years = 0;
    bool valid = true;

    cout << "Enter future value: ";
    cin >> futureValue;
    if(futureValue < 0){
        valid = false;
    }
    cout << "Enter interest rate (0-10): ";
    cin >> rate;
    if(rate > 10 || rate < 0){
        valid = false;
    }
    rate /= 100;
    cout << "Enter number of years for deposit (5 - 30): ";
    cin >> years;
    if(years < 5 || years > 30){
        valid = false;
    }

    if(valid){
        printGrowth(years, futureValue, rate);
    }
    else{
        cout << "Error: invalid input" << endl;
    }

    return 0;
}

float calculateInterest(float futureValue, float rate, int years){
    return (futureValue / pow((1+rate), years));
}

void printGrowth(int years, float futureValue, float rate){

    cout << fixed << setprecision(2) << endl;
    cout << left << setw(10) << "Year" << "Initial Deposit" << endl;
    for(int i = 5; i <= years; i+=5){
        cout << left << setw(10) << i << "$";
        cout << calculateInterest(futureValue, rate, i) << endl;
    }
}