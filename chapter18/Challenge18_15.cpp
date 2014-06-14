// Tui Popenoe
// Exercise 18.15

#include <iostream>

using namespace std;

int main(){
    string filename;
    string name;
    string date;
    char response;

    ofstream outputFile("reservations.txt", ios::app);

    if(!outputFile){
        cout << "Error: File could not be opened." << endl;
        exit(1);
    }

    do{
        cout << "\nEnter name: ";
        getline(cin, name);

        cout << "Enter date (mm/dd/yy: ";
        getline(cin, date);

        outputFile << date << endl << name << endl;

        cout << "Enter another reservation? (y/n): ";
        cin >> response;
    }
    while(response == 'y' || response == 'Y');
}