// Tui Popenoe
// Exercise 12.11

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool checkGuess(int guess, int answer);

int main(){

    int count = 0;
    int answer;
    int guess;
    bool correct = false;

    srand(time(0));

    answer = 1 + rand() % 100;

    cout << "I'm thinking of a number between 1 and 100. Can you guess" <<
        " what it is in 7 or fewer tries?" << endl;

    while(count < 7){

        cout << "Enter guess: " << endl;
        cin >> guess;

        correct = checkGuess(guess, answer);
        if(correct){
            break;
        }
        count++;
    }
    if(!correct){
        cout << "You've run out of guesses!" << endl;
        cout << "The number was: " << answer;
    }

    return 0;
}

bool checkGuess(int guess, int answer){
    if(guess < answer){
        cout << "Too low...";
        return false;
    }
    else if(guess > answer){
        cout << "Too high...";
        return false;
    }
    else if(guess == answer){
        cout << "Correct!" << endl;
        return true;
    }
}