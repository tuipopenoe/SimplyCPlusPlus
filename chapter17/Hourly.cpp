// Tui Popenoe
// Hourly.cpp

#include <iostream>
#include "Hourly.h"

using namespace std;

HourlyEmployee::HourlyEmployee(string &first, string &last,
    string &socialSecurityNumber, double hourlyWage, double hoursWorked) :
    Employee(first, last, socialSecurityNumber){

    setWage(hourlyWage);
    setHours(hoursWorked);
}

void HourlyEmployee::setWage(double wageAmount){
    if(wageAmount < 0){
        wage = 0.0;
    }
    else{
        wage = wageAmount;
    }
}

void HourlyEmployee::setHours(double hoursWorked){
    if(hoursWorked < 168.0){
        hours = hoursWorked;
    }
    else{
        hours = 0.0;
    }
}

double HourlyEmployee::getHours(){
    return hours;
}

double HourlyEmployee::getWage(){
    return wage;
}

double HourlyEmployee::earnings(){
    if(hours <= 40){
        return wage * hours;
    }
    else{
        return 40 * wage + (hours - 40) * wage * 1.5;
    }
}

void HourlyEmployee::print(){
    cout << "\nHourly employee: ";
    Employee::print();
}