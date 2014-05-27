// Tui Popenoe
// Exercise 15.13

#include <iostream>
#include <iomanip>

#include "Client.h"

using namespace std;

void initializeAccountRecords(Client[]);
void displayRecord(int, Client[]);

int main(){

    Client accountRecords[5] = {};
    bool enter = true;
    int input = 0;

    initializeAccountRecords(accountRecords);
    while(enter){
        cout << "Enter account number (-1 to exit): ";
        cin >> input;
        if(input == -1){
            enter = false;
            break;
        }
        if(input > sizeof(accountRecords) / sizeof(Client)){
            break;
        }

        displayRecord(input, accountRecords);
        cout << endl;
    }

    return 0;
}

void initializeAccountRecords(Client accountRecords[]){
    accountRecords[0] = Client(001, "Clark", "Kent", 20000.00);
    accountRecords[1] = Client(002, "Bruce", "Wayne", 1000000000);
    accountRecords[2] = Client(003, "James", "Howlett", 0.02);
    accountRecords[3] = Client(004, "Charles", "Xavier", 100000000);
    accountRecords[4] = Client(005, "Flash", "Gordon", -10.00);
}

void displayRecord(int input, Client accountRecords[]){
    cout << "First name: " << accountRecords[input].getFirstName() << endl;
    cout << "Last name: " << accountRecords[input].getLastName() << endl;
    cout << "Account balance: $" << fixed << setprecision(2) <<
        accountRecords[input].getAccountBalance() << endl;
}