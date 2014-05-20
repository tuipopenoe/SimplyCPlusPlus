// Tui Popenoe
// Exercise 7.12

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int selection;
    float amount;
    float converted;

    while(amount != -1){
        cout << "Enter dollars to convert (-1 to exit): ";
        cin >> amount;
        if(amount == -1){
            break;
        }

        else{
            cout << "Select conversion type: " << endl;
            cout << "1 - Dollars to Euros" << endl;
            cout << "2 - Dollars to Yen" << endl;
            cout << "3 - Dollars to Pesos" << endl;
            cout << "?" << endl;
            cin >> selection;
            cout << "Converted amount: " << fixed << setprecision(2);
            switch(selection){
                case 1:
                    cout << amount * 1.37121 << endl;
                    break;
                case 2:
                    cout << amount * 101.463 << endl;
                    break;
                case 3:
                    cout << amount * 12.8960 << endl;
                    break;
                default:
                    cout << "Invalid Entry" << endl;
            }
        }
    }

    return 0;
}