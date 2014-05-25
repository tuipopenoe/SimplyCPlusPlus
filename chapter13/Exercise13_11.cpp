// Tui Popenoe
// Exercise 13.11

#include <iostream>

using namespace std;

void selectSeat();

void assignFirstClass(char, bool[]);

void assignEconomy(char, bool[]);

int main(){

    bool planeSeats[10] = { false };
    int availableSeats = 10;
    int seat;
    char alternate;

    while(availableSeats > 0){
        cout << "Select one of the following options" << endl;
        cout << "1 - \"First class\"" << endl;
        cout << "2 - \"Economy\"" << endl;
        cout << "?";
        cin >> seat;

        if(seat == 1){
            assignFirstClass(alternate, planeSeats);
        }
        if(seat == 2){
            assignEconomy(alternate, planeSeats);
        }
        availableSeats--;
    }

    cout << endl << "Next flight leaves in three hours" << endl;

    return 0;
}

void assignFirstClass(char alternate, bool planeSeats[]){
    for(int i = 0; i < 5; i++){
        if(!planeSeats[i]){
            planeSeats[i] = true;
            break;
        }
        if(i == 4 && planeSeats[i] == true){
            cout << "Would you like a seat in economy?" << endl;
            cin >> alternate;
            if(alternate == 'Y' || alternate == 'y' ){
                assignEconomy(alternate, planeSeats);
            }
            else{
                cout << "\nNext flight leaves in three hours";
            }
        }
    }
}

void assignEconomy(char alternate, bool planeSeats[]){
    for(int i = 5; i < 10; i++){
        if(!planeSeats[i]){
            planeSeats[i] = true;
            break;
        }
        if(i == 9 && planeSeats[i] == true){
            cout << "Would you like a seat in first class?" << endl;
            cin >> alternate;
            if(alternate == 'Y' || alternate == 'y'){
                assignFirstClass(alternate, planeSeats);
            }
            else{
                cout<< "\nNext flight leaves in three hours";
            }
        }
    }
}