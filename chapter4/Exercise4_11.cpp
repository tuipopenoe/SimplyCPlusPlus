// Tui Popenoe
// Exercise 4.11

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float dollars;
    int currencyType;
    float convertedCurrency;

    cout << "Enter dollars to convert: ";
    cin >> dollars;
    cout << "Select conversion type: " << endl;
    cout << "1 - Dollars to Euros" << endl;
    cout << "2 - Dollars to Yen" << endl;
    cout << "3 - Dollars to Pesos" << endl;
    cout << "?";
    cin >> currencyType;
    cout << fixed << setprecision(2) << "Converted amount: $";
    switch(currencyType){
        case 1:
            cout << 0.72951 * dollars;
            break;
        case 2:
            cout << 101.380 * dollars;
            break;
        case 3:
            cout << 12.9064 * dollars;
            break;
        default:
            cout << dollars;
    }

    return 0;
}