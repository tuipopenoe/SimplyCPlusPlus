// Tui Popenoe
// Tutorial 15

#include <iostream>
#include <ctime>

#include "Time.h"

using namespace std;

int main(){

    int hour;
    int minute;
    int second;
    time_t currentTime;

    cout << "\nEnter current hour: ";
    cin >> hour;

    cout << "Enter current minute: ";
    cin >> minute;

    cout << "Enter current second: ";
    cin >> second;

    Time localTime(hour, minute, second);

    cout << endl;

    localTime.displayTime();

    while(true){
        currentTime = time(0);
        while(time(0) < (currentTime + 1));

        localTime.tick();
        cout<< "\r";
        localTime.displayTime();
    }

    return 0;
}