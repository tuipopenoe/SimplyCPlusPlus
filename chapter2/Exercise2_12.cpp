// Tui Popenoe
// Exercise 2.12

#include <iostream>

using namespace std;

int main(){

    cout << "Number \t Square \t Cube" << endl;
    for(int i = 1; i < 6; i ++){
        cout << i << "\t " << (i*i) << "\t \t " << (i*i*i)<<endl;
    }

    return 0;
}