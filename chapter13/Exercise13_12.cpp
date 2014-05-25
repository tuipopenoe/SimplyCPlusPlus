// Tui Popenoe
// Exercise 13.12

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDie();

void printStats(int frequency[], int count);

int main(){

    int times;
    int roll;
    int count =0;

    int frequency [6] = {};

    srand(time(0));

    cout << "Enter the number of times to roll the dice: ";
    cin >> times;
    for(int i = 0; i < times; i++){
        cout << "Roll: " << i << endl;
        cout << "------------" << endl;
        roll = rollDie();
        count++;
        cout << "Die 1: " << "Die 2: " << endl;
        cout << roll << "\t";
        frequency[roll-1]++;
        roll = rollDie();
        count++;
        cout << roll << endl << endl;
        frequency[roll-1]++;
    }

    printStats(frequency, count);

    return 0;
}

int rollDie(){
    return 1 + rand() % 6;
}

void printStats(int frequency[], int count){
    cout << "Statistical Information: "<< endl;
    for(int i=1; i <= 6; i++){
        cout << "Frequency for side ";
        i == 1 ? cout << "one: " : "";
        i == 2 ? cout << "two: " : "";
        i == 3 ? cout << "three: " : "";
        i == 4 ? cout << "four: " : "";
        i == 5 ? cout << "five: " : "";
        i == 6 ? cout << "six: " : "";
        cout << frequency[i -1] << endl;
    }
    cout << "Total dice rolled: " << count << endl;
}