// Tui Popenoe
// Exercise 9.12

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float salary;
    float tier1 = 3749.85;
    float tier2 = 12500;
    float tier3 = 21000;
    float tier4 = 49500;
    float tax;

    cout << "Enter yearly salary: ";
    cin >> salary;

    if(salary <= 0){
        cout << "Error: invalid salary: " << salary<< endl;
    }
    else{
        switch(static_cast<int>(salary)/25000){
            case 0:
                tax = salary * 0.15;
                break;
            case 1:
            case 2:
                tax = ((salary -25000) * 0.25) + tier1;
                break;
            case 3:
            case 4:
            case 5:
                tax = ((salary - 75000) * 0.28) + tier1 + tier2;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                tax = ((salary - 150000) * 0.33) + tier1 + tier2 + tier3;
                break;
            default:
                tax =((salary - 300000) * 0.35) + tier1 + tier2 + tier3 +
                    tier4;
                break;
        }
        cout << "Income Tax: $" << fixed << setprecision(2) << tax << endl;
    }

    return 0;
}