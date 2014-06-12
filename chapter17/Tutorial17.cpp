// Tui Popenoe
// Tutorial17.cpp

#include <iostream>
#include <iomanip>

#include "Employee.h"
#include "Salaried.h"
#include "Commission.h"
#include "Hourly.h"
#include "Piece.h"

using namespace std;

const int ARRAY_SIZE = 10;

int createEmployee(Employee * [], int);
void displayEmployees(Employee * [], int);

int main(){
    int count = 0;
    int selection = 0;

    cout << fixed << setprecision(2);

    Employee *employees[ARRAY_SIZE];

    while(selection != 3){
        cout << "\nSelect one of the following options" << endl;
        cout << "1 - Enter new employee information" << endl;
        cout << "2 - View payroll" << endl;
        cout << "3 - Exit the application" << endl;
        cout << "Enter selection: ";
        cin >> selection;

        switch(selection){
            case 1:
                if(count < ARRAY_SIZE){
                    count += createEmployee(employees, count);
                }
                else{
                    cout << "Error: you cannot enter any more employees."
                        << endl;
                }
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                break;
            default:
                cout << "Error: Enter a valid menu selection";
        }
    }

    for (int i = 0; i < count; i++){
        delete employees[i];
    }

    return 0;
}

int createEmployee(Employee *employees[], int index){
    string firstName;
    string lastName;
    string SSN;
    int selection;

    cin.ignore();

    cout << "\nEnter employee's first name: ";
    getline(cin, firstName);

    cout << "Enter employee's last name: ";
    getline(cin, lastName);

    cout << "Enter employee's social security number: ";
    getline(cin, SSN);

    cout << "\nSelect the employee type" << endl;
    cout << "1 - Salaried employee" << endl;
    cout << "2 - Commissioned employee" << endl;
    cout << "3 - Hourly employee" << endl;
    cout << "Enter selection : ";
    cin >> selection;

    switch(selection){
        case 1:
            double salary;
            cout << "\nEnter salary: ";
            cin >> salary;

            employees[index] = new SalariedEmployee(firstName, lastName,
                SSN, salary);
            break;
        case 2:
            double sales;
            double rate;

            cout << "\nEnter commission rate (%): ";
            cin >> rate;

            cout << "Enter sales: ";
            cin >> sales;

            employees[index] = new CommissionEmployee(firstName, lastName,
                SSN, sales, rate/100);
            break;
        case 3:
            double hourlyWage;
            double hours;

            cout << "\nEnter hourly wage: ";
            cin >> hourlyWage;
            cout << "Enter hours worked; ";
            cin >> hours;

            employees[index] = new HourlyEmployee(firstName, lastName, SSN,
                hourlyWage, hours);
            break;
        case 4:
            double pieceRate;
            double piecesMade;

            cout << "\nEnter piece rate: ";
            cin >> pieceRate;
            cout << "Enter pieces made: ";
            cin >> piecesMade;

            employees[index] = new PieceWorkerEmployee(firstName, lastName,
                SSN, pieceRate, piecesMade);
            break;
        default:
            cout << "Error: You must select a valid employee type." << endl;
            break;
            return 0;
    }

    return 1;
}

void displayEmployees(Employee *employees[], int count){
    double total = 0.0;

    if(count > 0){
        for(int i = 0; i < count; i++){
            employees[i]->print();

            cout << "Earned: $" << employees[i]->earnings() << endl;

            total += employees[i]->earnings();
        }

        cout << "\nTotal Payroll: $" << total << endl;
    }
    else{
        cout << "Error: You must enter at least one employee first." << endl;
    }
}