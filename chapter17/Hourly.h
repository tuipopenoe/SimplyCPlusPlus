// Tui Popenoe
// Hourly.h


#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h"

class HourlyEmployee : public Employee {
    public:
        HourlyEmployee(string &, string &, string &, double=0.0, double=0.0);

        void setWage(double);
        double getWage();

        void setHours(double);
        double getHours();

        virtual double earnings();
        virtual void print();

    private:
        double wage;
        double hours;
};

#endif