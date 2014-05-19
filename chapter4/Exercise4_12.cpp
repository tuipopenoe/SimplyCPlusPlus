// Tui Popenoe
// Exercise 4.12

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const float HOUR_LIMIT = 40.0;
    const float TAX = 0.15;
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

    cout << fixed << setprecision(2);
    cout << "Federal Taxes: " << TAX * grossWages;

    grossWages *= (1-TAX);

    cout << "Gross Wages: $" <<  << grossWages;

    return 0;
}