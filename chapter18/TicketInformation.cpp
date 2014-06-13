// Tui Popenoe
// TicketInformation.cpp

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int getDate();
void displayEvent(int);

int main(){
    int date;

    date = getDate();

    while(date != 0){
        displayEvent(date);
        date = getDate();
    }

    cout << endl;
    return 0;
}

int getDate(){
    int date;

    cout << "\nSelect date(1-31) or 0 to exit: ";
    cin >> date;

    while(date < 0 || date > 31){
        cout << "\nError: Enter a date between 1 and 31, inclusive\n" << endl;

        cout << "\nSelect date (1-31) or 0 to exit: ";
        cin >> date;
    }

    return date;
}

void displayEvent(int date){
    string time;
    string price;
    string name;
    string description;
    string contents;
    int day;

    ifstream calendarFile("calendar.txt");

    if(!calendarFile){
        cout << "Error: File could not be opened." << endl;
        exit(1);
    }

    calendarFile >> day;
    calendarFile.ignore();

    while(!calendarFile.eof()){
        if(day == date){
            getline(calendarFile, time);
            getline(calendarFile, price);
            getline(calendarFile, name);
            getline(calendarFile, description);

            cout << "\nEvent: " << name << endl;
            cout << "Time: " << time << endl;
            cout << "Price: " << price << endl;
            cout << "Description: " << description << endl;

            return;
        }
        else{
            for(int i = 0; i < 4; i++){
                getline(calendarFile, contents);
            }
        }

        calendarFile >> day;
        calendarFile.ignore();
    }
    cout << "\nNo event for selected day." << endl;
    return;
}