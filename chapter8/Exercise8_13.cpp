// Tui Popenoe
// Exercise 8.11

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calculateInterest(float principal, float rate, int years);
void printGrowth(float principal, float rate);

int main(){

    float principal = 0;
    float rate = 1;
    bool valid = true;

    cout << "Enter principal: ";
    cin >> principal;
    if(principal < 0){
        valid = false;
    }
    if(valid){
        printGrowth(principal, rate);
    }
    else{
        cout << "Error: invalid input" << endl;
    }

    return 0;
}

float calculateInterest(float principal, float rate, int years){
    return (principal * pow((1+rate), years));
}

void printGrowth(float principal, float rate){
    cout << left << setw(10) << "Rate (%)" << "Amount after 10 years" << endl;
    for(int i = 5; i <= 10; i++){
        rate = static_cast<float>(i / 100);
        cout << "Rate: " << rate << endl;
        cout << left << setw(10) << i << "$";
        cout << calculateInterest(principal, rate, 10) << endl;
    }
}