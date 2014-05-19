// Tui Popenoe
// Challenge 4.17

#include <iostream>
#include <iomanip>

using namespace std;

int encryptDigit(int x);
void encryptNumber(int x);

int main(){

    int input;

    int digit;

    cout << "Enter a four-digit number: ";
    cin >> input;

    cout << "Encrypted digits: ";
    encryptNumber(input);
    return 0;
}

int encryptDigit(int digit){
    return (digit + 7) % 10;
}

void encryptNumber(int input){
    for(int i = 0; i < 4; i++){
        int inputDigit = input % 10;
        inputDigit = encryptDigit(inputDigit);
        input /= 10;
        cout << inputDigit;
    }
}
