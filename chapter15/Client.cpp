// Tui Popenoe
// Client.cpp

#include <iostream>
#include <iomanip>
#include <string>

#include "Client.h"

using namespace std;

Client::Client(){
    setAccountNumber(1);
    setFirstName("John");
    setLastName("Doe");
    setAccountBalance(0.0);
}

Client::Client(int accountNumberValue, string firstNameValue, string
    lastNameValue, double accountBalanceValue){
    setAccountNumber(accountNumberValue);
    setFirstName(firstNameValue);
    setLastName(lastNameValue);
    setAccountBalance(accountBalanceValue);
}

int Client::getAccountNumber(){
    return accountNumber;
}

void Client::setAccountNumber(int accountNumberValue){
    if(accountNumberValue > 0){
        accountNumber = accountNumberValue;
    }
    else{
        accountNumber = accountNumberValue * -1;
    }
}

string Client::getFirstName(){
    return firstName;
}

void Client::setFirstName(string firstNameValue){
    firstName = firstNameValue;
}

string Client::getLastName(){
    return lastName;
}

void Client::setLastName(string lastNameValue){
    lastName = lastNameValue;
}

double Client::getAccountBalance(){
    return accountBalance;
}

void Client::setAccountBalance(double accountBalanceValue){
    accountBalance = accountBalanceValue;
}