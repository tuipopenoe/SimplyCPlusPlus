// Tui Popenoe
// Exercise 4.13

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int accountNumber;
    float balance;
    float charges;
    float credits;
    float limit;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter the starting balance: ";
    cin >> balance;
    cout << "Enter total charges: ";
    cin >> charges;
    cout << "Enter total credits: ";
    cin >> credits;
    cout << "Enter credit limit: ";
    cin >> limit;

    balance += (charges - credits);

    cout << fixed << setprecision(2);
    cout << "New balance: " << balance;

    if(balance > limit){
        cout << "Credit Limit Exceeded!"
    }

    return 0;
}