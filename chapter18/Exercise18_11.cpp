// Tui Popenoe
// Exercise 18.11

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    string fileName;
    string firstName;
    string lastName;
    string birthday;
    char response;

    cout << "\nEnter file name: ";
    getline(cin, fileName);

    ofstream outputFile(fileName.c_str(), ios::app);

    if(!outputFile){
        cout << "Error: File could not be opened." << endl;
        exit(1);
    }

    cout << "File opened successfully!" << endl;

    do{
        cout << "\nEnter first name: ";
        getline(cin, firstName);

        cout << "Enter last name: ";
        getline(cin, lastName);

        cout << "Enter birthday (mm/dd/yy): ";
        getline(cin, birthday);

        cout << "\nWould you like to enter more birthdays (y/n): ";
        cin >> response;
    }
    while(response == 'y' || response == 'Y');

    return 0;
}