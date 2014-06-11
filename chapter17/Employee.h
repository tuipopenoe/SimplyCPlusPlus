// Tui Popenoe
// Employee.h

ifndef EMPLOYEE_H
define EMPLOYEE_H

#include <string>

using namespace std;

class Employee{
    public:
        Employee(string &, string &, string &);

        void setFirstName(string &);
        string getFirstName();

        void setLastName(string &);
        string getLastName();

        void setSocialSecurityNumber(string &);
        string getSocialSecurityNumber();

        void print();

    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
};

#endif