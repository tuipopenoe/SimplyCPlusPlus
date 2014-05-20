// Tui Popenoe
// Exercise 9.13

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int age;
    float price;

    cout << "Enter your age: ";
    cin >> age;

    if(age > 0){
        switch(age/5){
            case 0:
            case 1:
                price = 3.50;
                break;
            case 2:
            case 3:
                price = 5.00;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                price = 7.5;
                break;
            default:
                price = 4.5;
        }
        cout << "Ticket price: $" << price << endl;
    }
    else{
        cout << "Error: invalid age";
    }

    return 0;
}