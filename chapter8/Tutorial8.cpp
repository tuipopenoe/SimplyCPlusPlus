// Tui Popenoe
// Tutorial 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateInterest(float principal, float rate, int years);
void printGrowth(int years, float principal, float rate);

int main(){

    float principal = 0;
    float rate = 0;
    int years = 0;

    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter interest rate: ";
    cin >> rate;
    rate /= 100;
    cout << "Enter number of years for deposit: ";
    cin >> years;

    printGrowth(years, principal, rate);

    return 0;
}

float calculateInterest(float principal, float rate, int years){
    return (principal * pow((1+rate), years));
}

void printGrowth(int years, float principal, float rate){

    cout << fixed << setprecision(2) << endl;
    cout << left << setw(10) << "Year" << "Amount on Deposit" << endl;
    for(int i = 1; i <= years; i++){
        cout << left << setw(10) << i << "$";
        cout << calculateInterest(principal, rate, i) << endl;
    }
}