// Tui Popenoe
// Tutorial 4

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const float HOUR_LIMIT = 40.0;
    float hourlyWage;
    float hours;
    float grossWages = 0.0;

    cout << "Enter hourly wage: ";
    cin >> hourlyWage;
    cout << "Enter hours worked this week: ";
    cin >> hours;

    if(hours > HOUR_LIMIT){
        grossWages += (HOUR_LIMIT * hourlyWage);
        grossWages += ((1.5*hourlyWage) * (hours - HOUR_LIMIT));
    }
    else{
        grossWages += (hourlyWage * hours);
    }

    cout << "Gross Wages: $" << fixed << setprecision(2) << grossWages;

    return 0;
}