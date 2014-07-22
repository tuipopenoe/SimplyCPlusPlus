// Tui Popenoe
// PhoneNumber.h

#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H

#include <string>

using namespace std;

class PhoneNumber{
    public:
        PhoneNumber();

        string getAreaCode();
        void setAreaCode(string);

        string getExchange();
        void setExchange(string);

        string getLine();
        void setLine(string);

    private:
        string areaCode;
        string exchange;
        string line;
};

#endif