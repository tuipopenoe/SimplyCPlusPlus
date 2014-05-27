// Tui Popenoe
// Client.h

#ifndef CLIENT_H
#define CLIENT_H
#endif

#include <string>

class Client{
    public:
        Client();
        Client(int, std::string, std::string, double);

        int getAccountNumber();
        std::string getFirstName();
        std::string getLastName();
        double getAccountBalance();

        void setAccountNumber(int);
        void setFirstName(std::string);
        void setLastName(std::string);
        void setAccountBalance(double);

    private:
        int accountNumber;
        std::string firstName;
        std::string lastName;
        double accountBalance;
};