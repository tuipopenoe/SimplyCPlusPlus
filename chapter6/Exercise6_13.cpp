// Tui Popenoe
// Exercise 6.13

#include <iostream>
#include <string>

using namespace std;

char encryptChar(char x);

int main(){

    string plainText;
    string encrypted;

    char password;

    cout << "Enter five-character string: ";
    getline(cin, plainText);

    if(plainText.size() != 5){
        cout << "Error, incorrect password length." << endl;
        return 0;
    }
    else{
        for(int i = plainText.size()-1; i >= 0 ; i--){
            encrypted += encryptChar(plainText.at(i));
        }
    }

    cout << "Password is: " << encrypted << endl << endl;

    return 0;
}

char encryptChar(char x){
    return x-15;
}