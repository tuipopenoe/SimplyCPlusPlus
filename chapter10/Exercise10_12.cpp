// Tui Popenoe
// Exercise 10.12

#include <iostream>

using namespace std;

void printSquare(int size, char fill);

int main(){

    int size;
    char fill;

    cout << "Enter square size: ";
    cin >> size;
    cout << "Enter fill character: ";
    cin >> fill;

    printSquare(size, fill);

    return 0;
}

void printSquare(int size, char fill){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << fill;
        }

        cout << endl;
    }
}