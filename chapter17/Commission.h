// Tui Popenoe
// Commission.h

#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"

class CommissionEmployee : public Employee{
    public:
        CommissionEmployee(string &, string &, string &, double = 0.0,
        double = 0.0);

        void setCommissionRate(double);
        double getCommissionRate();

        void setGrossSales(double);
        double getGrossSales();

        virtual double earnings();
        virtual void print();

    private:
        double grossSales;
        double commissionRate;
};

#endif