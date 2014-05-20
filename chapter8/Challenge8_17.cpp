// Tui Popenoe
// Challenge 8.17

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calcSalary(float wage, float rate, int years);
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
        printGrowth(wage, rate, years);
    }
    else{
        cout << "Error: invalid input" << endl;
    }

    return 0;
}

float calcSalary(float wage, float rate, int years){
    return (wage * pow((1+(rate/100)), years));
}

void printGrowth(float wage, float rate, int years){
    cout << left << setw(10) << "Year" << "Annual Salary" << endl;
    for(int i = 1; i <= years; i++){
        cout << left << setw(10) << i << "$";
        cout << calcSalary(wage, rate, years) * 52 << endl;
    }
}