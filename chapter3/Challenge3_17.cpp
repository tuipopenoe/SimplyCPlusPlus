// Tui Popenoe
// Programming Challenge 3.17

#include <iostream>

using namespace std;

int main(){
    int input;

    cout << "Enter five-digit number: ";
    cin >> input;
    cout << "Ones digit is: " << input % 10 << endl;
    input /= 10;
    cout << "Tens digit is: " << input % 10 << endl;
    input /= 10;
    cout << "Hundreds digit is: " << input % 10 << endl;
    input /= 10;
    cout << "Thousands digit is: " << input % 10 << endl;
    input /= 10;
    cout << "Ten-thousands digit is: " << input << endl;
}