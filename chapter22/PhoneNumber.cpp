// Tui Popenoe
// PhoneNumber.cpp

#include <iostream>
#include "PhoneNumber.h"

// Constructor
PhoneNumber::PhoneNumber(){
    setAreaCode("");
    setExchange("");
    setLine("");
}

// Returns area setAreaCode
string PhoneNumber::getAreaCode(){
    return areaCode;
}

// sets the areaCode
void PhoneNumber::setAreaCode(string inputAreaCode){
    areaCode = inputAreaCode;
}

string PhoneNumber::getExchange(){
    return exchange;
}

void PhoneNumber::setExchange(string inputExchange){
    exchange = inputExchange;
}

string PhoneNumber::getLine(){
    return line;
}

void PhoneNumber::setLine(string inputString){
    line = inputString;
}