// Tui Popenoe
// Tutorial9

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float salary;
    float taxRate;
    float tax;

    cout << "Enter yearly salary: ";
    cin >> salary;

    if(salary <= 0){
        cout << "Error: invalid salary: " << salary<< endl;
    }
    else{
        switch(static_cast<int>(salary)/25000){
            case 0:
                taxRate = 0.15;
                break;
            case 1:
            case 2:
                taxRate = 0.25;
                break;
            case 3:
            case 4:
            case 5:
                taxRate = 0.28;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                taxRate = 0.33;
                break;
            default:
                taxRate = 0.35;
                break;
        }
        tax = salary * taxRate;
        cout << "Income Tax: $" << fixed << setprecision(2) << tax << endl;
    }

    return 0;
}