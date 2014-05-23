// Tui Popenoe
// Exercise 11.13

#include <iostream>

using namespace std;

float calcCharge(float hours);

int main(){

    float charge;
    float hours;
    float total;
    float totalHours;

    while(hours != 0){
        cout << "Enter the hours parked for a car (0 to end): ";
        cin >> hours;
        if(hours == 0){
            break;
        }
        charge = calcCharge(hours);
        total += charge;
        totalHours += hours;
        cout << "Charge: $" << charge << endl;
    }
    cout << "Total hours: " << totalHours << endl;
    cout << "Total charges: "  << total;

    return 0;
}

float calcCharge(float hours){
    if(hours <= 3.0){
        return 2.0;
    }
    else if(hours < 19.0){
        return 2.0 + 0.5*(hours - 3.0);
    }
    else{
        return 10.0;
    }
}