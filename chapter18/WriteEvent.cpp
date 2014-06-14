// Tui Popenoe
// WriteEvent

// Tui Popenoe
// Tutorial18.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    string fileName;
    int date;
    string time;
    string price;
    string eventName;
    string description;
    char response;

    cout << "\nEnter file name: " ;
    getline(cin, fileName);

    ofstream outputFile(fileName.c_str(), ios::app);

    if(!outputFile){
        cout << "Error: File could not be opened." << endl;
        exit(1);
    }

    cout << "File opened successfully!" << endl;

    do{
        cout << "\nEnter the day of event (1-31): ";
        cin >> date;
        cin.ignore();

        cout << "Enter the event time (hh:mm): " ;
        getline(cin, time);

        cout << "Enter the event price $:";
        getline(cin, price);

        cout << "Enter the event name: ";
        getline(cin, eventName);

        cout << "Enter the event description: ";
        getline(cin, description);

        outputFile << date << endl << time << "\n$" << price << endl <<
            eventName << endl << description << endl;

        cout << "\nWould you like to enter more events (y = yes, n = no): ";
        cin >> response;
    }
    while( response == 'y' || response == 'Y');

    return 0;
}