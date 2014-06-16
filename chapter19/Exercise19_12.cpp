// Tui Popenoe
// Exercise 19.12

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void displayMenu(string &);
string substitutionCipher(string &);
string transpositionCipher(string &);

int main(){
    string input;
    string output;

    int selection = 0;

    cout << "Enter plain text: ";
    cin >> input;

    cout << "Select the encryption type: " << endl;
    cout << "1 - Substitution Cipher" << endl;
    cout << "2 - Transposition Cipher" << endl;
    cout << "Enter selection: ";
    cin >> selection;
    while(selection < 1 && selection > 2){
        if(selection == 1){
            output = substitutionCipher(input);
        }
        else{
            output = transpositionCipher(input);
        }
    }

    cout << "Cipher text is: " << output<< endl;
}

string substitutionCipher(string &data){

}

string transpositionCipher(string &data){
    string even;
    string odd;
    for(int i = 0; i < data.length()){
        if(i % 2 == 0){
            odd += data.at(i);
        }
        else{
            even += data.at(i);
        }
    }

    return even + odd;
}

