// Tui Popenoe
// Exercise 3.13

#include <iostream>

using namespace std;

int main(){
    float ctemp;
    float ftemp;

    cout << "Enter a celsius temperature: ";
    cin >> ctemp;
    ftemp = 1.8*ctemp + 32;
    cout << "Farenheit equivalent: "<< ftemp;
}