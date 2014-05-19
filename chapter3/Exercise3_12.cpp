// Tui Popenoe
// Exercise 3.12

#include <iostream>

using namespace std;

int main(){
    int input;
    int output;
    cout << "Enter number to encrypt: "
    cin >> input;

    output = input * 7 + 5;

    cout << "Encrypted number: " + output;
}