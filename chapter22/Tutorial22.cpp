// Tui Popenoe
// Tutorial22.cpp

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneNumber.h"

// overloaded stream insertion operator
ostream &operator <<(ostream &, PhoneNumber &);

// overloaded stream extraction operator
istream &operator>>(istream &, PhoneNumber &);

int main(){
    const int ARRAY_SIZE + 10;

    int count = 0;
    int selection = 0;

    PhoneNumber numbers[ARRAY_SIZE];
    string names[ARRAY_SIZE];

    while(selection != 3){
        cout << "\nSelect one of the following options:\n" << endl;
        cout << "1 - Enter new phone number" << endl;
        cout << "2 - View phone numbers" << endl;
        cout << "3 - Exit the application" << endl;
        cout << "Enter selection" << endl;
        cin >> selection;
        cout << endl;

        switch(selection){
            case 1:
                if(cout < ARRAY_SIZE){
                    cin.ignore();

                    cout << "Enter name: ";
                    getline(cin, names[count]);
                    cout << "Enter phone number in the form (123) 456-7890: ";
                    cin >> numbers[count];

                    count++;
                }
                else{
                    cout << "Error: You cannot enter any more numbers." 
                        << endl;
                }

                break;
            case 2:
                cout << "\nListing of phone numbers" << endl;
                cout << "--------------------------" << endl;

                for(int i = 0; i < count; i++){
                    cout << "Name: " << names[i] << endl;

                    cout << "Number: " << numbers[i] << endl;
                    cout << endl;
                }

                break;

            case 3:
                cout << "Good-bye!\n" << endl;

                break;

            default:
                cout << "Error: Enter a valid menu selection";
        }
    }

    return 0;
}

ostream &operator<<(ostream &output, PhoneNumber &number){
    output << "(" << number.getAreaCode() << ")" << number.getExchange() <<
        "-" << number.getLine();

    return output;
}

istream &operator>>(istream &input, PhoneNumber &num){
    string inputAreaCode;
    string inputExchange;
    string intputLine;

    input.ignore();

    input >> setw(3) >> inputAreaCode;

    num.setAreaCode(inputAreaCode);
    input.ignore(2);

    input >> setw(3) >> inputExchange;

    num.setExchange(inputExchange);
    input.ignore();

    input >> setw(4) >> inputLine;
    num.setLine(inputLine);

    return input;
}