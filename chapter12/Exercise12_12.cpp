// Tui Popenoe
// Exercise 12.12

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main(){

    int times;
    int roll;

    int one;
    int two;
    int three;
    int four;
    int five;
    int six;

    enum Sides {ONE=1, TWO, THREE, FOUR, FIVE, SIX};

    srand(time(0));

    cout << "Enter the number of times to roll the dice: ";
    cin >> times;
    for(int i = 0; i < times; i++){
        cout << "Roll: " << i << endl;
        cout << "------------" << endl;
        roll = rollDice();
        cout << "Die 1: " << "Die 2: " << endl;
        cout << roll << "\t";
        roll == ONE ? one++: ;
        roll == TWO ? two++: ;
        roll == THREE ? three++: ;
        roll == FOUR ? four++: ;
        roll == FIVE ? five++: ;
        roll == SIX ? six++: ;
        roll = rollDice();
        roll == ONE ? one++: ;
        roll == TWO ? two++: ;
        roll == THREE ? three++: ;
        roll == FOUR ? four++: ;
        roll == FIVE ? five++: ;
        roll == SIX ? six++: ;
        cout << roll << endl << endl;
    }

    cout << "Statistical Information: " << endl;
    for(int i = 0; i < 6; i++){
        cout << "Frequency for side " << Sides(i) <<
    }

    return 0;
}