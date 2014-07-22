// Tui Popenoe
// Exercise 22.11 - String Demonstration

#include <iostream>
#include <string>

using namespace std;

int main(){
    string one;
    string two;

    cout << "Enter a string: ";
    cin >> one;
    cout << "Enter a second string: ";
    cin >> two;

    cout << "First String: " << one << endl;
    cout << "Second String: " << two << endl;

    if(one < two){
        cout << "\"" << one << "\" precedes \"" << two << "\"" <<
            " in alphabetic order" << endl;
    }
    else if(two < one){
        cout << "\"" << two << "\" precedes \"" << one << "\"" <<
            "in alphabetic order" << endl;
    }
    else{
        cout << "\"" << one << "\" equals \"" << two << "\"" <<
            "in alphabetic order" << endl;
    }

    cout << endl;
    cout << "\"" << one << "\" + \"" << two << "\": " << one + two << endl;
    cout << "\"" << two << "\" + \"" << one << "\": " << two + one << endl;
    cout << endl;

    for(int i=0; i < one.length(); i++){
        cout << "Character " << i << " from \"" << one << "\": " << 
            one.at(i) << endl;
    }
    for(int i=0; i < two.length(); i++){
        cout << "Character " << i << " from \"" << two << "\": " << 
            two.at(i) << endl;
    }

    return 0;
}