// Tui Popenoe
// Employee.cpp

#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string &first, string &last, string &SSN) :
    firstName( first ),
    lastName( last ),
    socialSecurityNumber( SSN ){

}

string Employee::getFirstName(){
    return firstName;
}

string Employee::getLastName(){
    return lastName;
}

string Employee::getSocialSecurityNumber(){
    return socialSecurityNumber;
}

void Employee::setFirstName(string &first){
    firstName = first;
}

void Employee::setLastName(string &last){
    lastName = last;
}

void Employee::setSocialSecurityNumber(string &number){
    socialSecurityNumber = number;
}

void Employee::print(){
    cout << getFirstName() << ' ' << getLastName() <<
        "\nSocial Security Number" << getSocialSecurityNumber() << endl;
}