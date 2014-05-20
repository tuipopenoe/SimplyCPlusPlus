// Tui Popenoe
// Challenge 6.17

#include <iostream>

using namespace std;

void printHistogram(int x);

int main(){

    int first;
    int second;
    int third;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Enter third number: ";
    cin >> third;

    cout << "\nHistogram: "<<endl;
    printHistogram(first);
    printHistogram(second);
    printHistogram(third);


}

void printHistogram(int x){
    for(int i = 0; i < x; i++){
        cout << "*";
    }
    cout << endl;
}