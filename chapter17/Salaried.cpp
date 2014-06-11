// Tui Popenoe
// Salaried.cpp

#include "Salaried.h"

SalariedEmployee::SalariedEmployee(string &first, string &last, string
    &socialSecurityNumber, double salary) : Employee( first, last,
        socialSecurityNumber){
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary){
    if(salary < 0.0){
        weeklySalary = 0.0;
    }
}