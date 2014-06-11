// Tui Popenoe
// Commission.cpp

#include <iostream>
#include "Commission.h"

using namespace std;

CommissionEmployee::CommissionEmployee(string &first, string &last,
    string &socialSecurityNumber, double grossWeeklySales, double percent) :
    Employee(first, last, socialSecurityNumber){

    setGrossSales(grossWeeklySales);
    setCommissionRate(percent);
}

double CommissionEmployee::getCommissionRate(){
    return commissionRate;
}

double CommissionEmployee::getGrossSales(){
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate){
    if(rate > 0.0 && rate < 1.0){
        commissionRate = rate;
    }
    else{
        commissionRate = 0.0;
    }
}

void CommissionEmployee::setGrossSales(double sales){
    if(sales < 0.0){
        grossSales = 0.0;
    }
    else{
        grossSales = sales;
    }
}

double CommissionEmployee::earnings(){
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print(){
    cout << "\nCommission employee: ";
    Employee::print();
}