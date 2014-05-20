// Tui Popenoe
// Tutorial 7

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int count = 0;
    float grade;
    float total = 0;

    while(grade !=-1){

        cout << "Enter grade (-1 to exit): ";
        cin >> grade;

        if(grade == -1){
            break;
        }
        else{
            total += grade;
            count++;
        }
    }
    if(total == 0){
        cout << "Error: no grades were entered"<<endl;
    }
    else{
        cout << "\nAverage grade: " << fixed << setprecision(2) <<
            static_cast<double>(total/count) << endl;
    }

    return 0;
}