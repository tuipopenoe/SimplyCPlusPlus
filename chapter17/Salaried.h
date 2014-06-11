// Tui Popenoe
// Salaried.h

#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"

class SalariedEmployee : public Employee{
    public:
        SalariedEmployee(string &, string &, string &, double = 0.0);

        void setWeeklySalary(double);
        double getWeeklySalary();

        void print();

    private:
        double weeklySalary;
};

#endif