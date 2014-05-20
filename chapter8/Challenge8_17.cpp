// Tui Popenoe
// Challenge 8.17

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calcSalary(float wage, float rate);
void printGrowth(float wage, float rate, int years);

int main(){

    float wage = 0;
    float rate = 1;
    int years;
    bool valid = true;

    cout << "Enter starting weekly wage: ";
    cin >> wage;
    if(wage < 0){
        valid = false;
    }
    cout << "Enter amount of raise (in %): ";
    cin >> rate;
    if(rate < 0){
        valid = false;
    }
    cout << "Enter years of employment: ";
    cin >> years;
    if(valid){
        printGrowth(wage*52, rate, years);
    }
    else{
        cout << "Error: invalid input" << endl;
    }

    return 0;
}

float calcSalary(float wage, float rate){
    return (wage * (1+(rate/100)));
}

void printGrowth(float wage, float rate, int years){
    cout << left << setw(10) << "Year" << "Annual Salary" << endl;
    for(int i = 0; i < years; i++){
        cout << left << setw(10) << i + 1 << "$";
        if(i > 0){
            wage = calcSalary(wage, rate);
        }
        cout << fixed << setprecision(2) <<  wage  << endl;
    }
}