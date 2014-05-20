// Tui Popenoe
// Exercise 6.11

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int limit;

    cout << "Enter upper limit: ";
    cin >> limit;

    cout << left << setw(10) << "n" << setw(10) << "n-squared" << setw(10) <<
        "n-cubed" << endl;
    for(int i = 1; i <= limit; i++){
        cout << left << setw(10) << i << setw(10) << pow(i, 2) << setw(10) <<
            pow(i, 3) << endl;
    }

    return 0;
}