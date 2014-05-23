// Tui Popenoe
// Tutorial 12

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDice(void);

int main(){

    const int SEVEN = 7;
    const int ELEVEN = 11;
    const int TWO = 2;
    const int THREE = 3;
    const int TWELVE = 12;

    int sum;
    int point;
    string input;

    enum Status {CONTINUE, WON, LOST};

    Status gameStatus;

    srand(time(0));

    sum = rollDice();

    switch(sum){
        // Win on first roll
        case SEVEN:
        case ELEVEN:
            gameStatus = WON;
            break;

        // Lose on first roll
        case TWO:
        case THREE:
        case TWELVE:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            point = sum;
            cout << "Point is: " << point << endl;
            break;
    }

    while(gameStatus == CONTINUE){
        cout << "\nPress Enter to continue...";
        getline(cin, input);

        sum = rollDice();

        if(sum == point){
            gameStatus = WON;
        }
        else if(sum == SEVEN){
            gameStatus = LOST;
        }
    }

    if(gameStatus == WON){
        cout << "Player Wins" << endl << endl;
    }
    else{
        cout << "Player Loses" << endl << endl;
    }

    return 0;
}

int rollDice(){
    int die1;
    int die2;

    int diceSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    diceSum = die1 + die2;

    cout << endl << "Player rolled: " << die1 << " + " << die2 << " = " <<
        diceSum << endl;

    return diceSum;
}