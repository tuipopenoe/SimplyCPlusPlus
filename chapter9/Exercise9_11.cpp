// Tui Popenoe
// Exercise 9.11

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int items;
    float sales;
    float commission;
    float earnings;

    cout << "Enter number of items sold: ";
    cin >> items;
    if(items > 0){
        switch(items/10){
            case 0:
                commission = 0.01;
                break;
            case 1:
            case 2:
            case 3:
                commission = 0.02;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                commission = 0.03;
                break;
            default:
                commission = 0.04;
        }
        sales = items * 100.00;
        earnings = commission * sales;

        cout << fixed << setprecision(2);
        cout << setw(16) << left << "Gross Sales: " << "$" << sales << endl;
        cout << setw(16) << "Commission (%):" << commission * 100 << endl;
        cout << setw(16) << "Earnings: " << "$" << earnings;

    }
    else{
        cout << "Error: invalid number of items sold";
    }

    return 0;
}