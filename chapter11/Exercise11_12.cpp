// Tui Popenoe
// Exercise 11.12

#include <iostream>

using namespace std;

float calcAvg(float total, int count);

int main(){

    float temp;
    bool cont = true;
    float total = 0;
    int count = 0;

    while(cont){
        cout << "Enter score (-1 to exit): ";
        cin >> temp;
        if(temp == -1){
            cont = false;
            break;
        }
        total += temp;
        count++;
        cout << "Number taken: " << count << endl;

        cout << "Average score: " << calcAvg(total, count) << endl;
    }

    return 0;
}

float calcAvg(float total, int count){
     return total / count;
}