// Tui Popenoe
// Salaried.cpp

#include <iostream>
#include "Salaried.h"

using namespace std;

SalariedEmployee::SalariedEmployee(string &first, string &last, string
    &socialSecurityNumber, double salary) : Employee( first, last,
        socialSecurityNumber){
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary){
    if(salary < 0.0){
        weeklySalary = 0.0;
    }
    else{
        weeklySalary = salary;
    }
}

double SalariedEmployee::getWeeklySalary(){
    return weeklySalary;
}

double SalariedEmployee::earnings(){
    return getWeeklySalary();
}

void SalariedEmployee::print(){
    cout << "\nSalaried employee: ";
    Employee::print();
}