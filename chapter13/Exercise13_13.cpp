// Tui Popenoe
// Exercise 13.13

#include <iostream>
#include <iomanip>

using namespace std;

int rateFood(int);

void printResults(int[]);

int main(){

    int ratings[20] = {0};
    int rating;

    for(int i = 0; i < 20; i++){
        rating = rateFood(rating);
        ratings[rating]++;
    }

    printResults(ratings);

    return 0;
}

int rateFood(int rating){
    cout << "Rate cafeteria food (scale of 1 to 10):";
    cin >> rating;
    return rating;
}

void printResults(int ratings[]){

    cout << left << setw(10) << "Rating:" << "Frequency:" << endl;
    for(int i = 1; i <= 10; i++){
        cout << i;
        for(int j = 0; j < ratings[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
}