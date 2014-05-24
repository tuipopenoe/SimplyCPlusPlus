// Tui Popenoe
// Exercise 12.13

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

void randomNum(int ranNum, int base, int length);

int main(){
    srand(time(0));

    cout << "Here are your lucky numbers: " << endl;
    cout << "----------------------------" << endl;
    cout << setw(18) << "Three-number lottery: ";
    randomNum(9, 0, 3);
    cout << setw(18) << "Four-number lottery: ";
    randomNum(9, 0, 4);
    cout << setw(18) << "Five-number lottery: ";
    randomNum(39, 1, 5);
    cout << setw(18) << "Five-number + 1 lottery: ";
    randomNum(49, 1, 5);
    randomNum(42, 1, 1);

    return 0;
}

void randomNum(int ranNum, int base, int length){
    for(int i = 0; i < length; i++){
        cout << base + rand() % ranNum << " ";
    }
    if(ranNum < 48){
        cout << endl;
    }
}
