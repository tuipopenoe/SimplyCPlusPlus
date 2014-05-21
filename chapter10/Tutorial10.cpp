// Tui Popenoe
// Tutorial 10

#include <iostream>
#include <iomanip>

using namespace std;

float calculatePay(float wage, float hours, float limit, float pay);

int main(){

    const float HOUR_LIMIT = 40.0;
    float hourlyWage;
    float hours;
    float grossWages = 0.0;

    cout << "Enter hourly wage: ";
    cin >> hourlyWage;
    cout << "Enter hours worked this week: ";
    cin >> hours;

    grossWages = calculatePay(hourlyWage, hours, HOUR_LIMIT, grossWages);

    cout << "Gross Wages: $" << fixed << setprecision(2) << grossWages;

    return 0;
}

float calculatePay(float wage, float hours, float limit, float pay){
    if(hours > limit){
        pay += limit * wage);
        pay += ((1.5 * wage) * (hours - limit));
    }
    else{
        pay += (wage * hours);
    }

    return pay;
}
