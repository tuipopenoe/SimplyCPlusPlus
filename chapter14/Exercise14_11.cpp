// Tui Popenoe
// Exercise 14.11

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int ARRAY_SIZE = 4;
const int OPTIONS = 2;
const string names[] = {"Pizza", "Hot Dog", "Fish Sticks", "Mystery Meat"};


bool getItem(int[][OPTIONS]);
void getRating(int[][OPTIONS], int);
void printDisplay(int[][OPTIONS], const string[]);

int main(){
    int display[ARRAY_SIZE][OPTIONS] = {0};
    bool getInfo = true;


    while(getInfo){
        getInfo = getItem(display);
    }

    printDisplay(display, names);

    return 0;
}

void printDisplay(int display[][OPTIONS], const string names[]){
    cout << left << setw(13) << "Food" << "Like" << "Dislike" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; i < 2; j++){
            cout << setw(13) << names[i];
            cout << setw(5) << display[i][j];
        }
    }
}

bool getItem(int display[][OPTIONS]){
    int input;
    cout << "Select food item: " << endl;
    cout << "1 - Pizza" << endl;
    cout << "2 - Hot Dog" << endl;
    cout << "3 - Fish Sticks" << endl;
    cout << "4 - Mystery Meat" << endl;
    cout << "5 - Exit this application" << endl;
    cin >> input;

    if(input > 0 && input < 5){
        getRating(display, input);
    }
    else if(input == 5){
        return false;
    }

    return true;
}

void getRating(int display[][OPTIONS], int choice){
    char selection;
    cout << "Do you like or dislike ";
    switch(choice){
        case 0:
        case 1:
            cout << "Pizza";
            break;
        case 2:
            cout << "Hot Dog";
            break;
        case 3:
            cout << "Fish Sticks";
            break;
        case 4:
            cout << "Myster Meat";
            break;
        default:
            break;
    }
    cout << " (enter l or d)? " ;
    cin >> selection;

    bool cont = true;
    while(cont){
        if(selection == 'l'){
            display[choice - 1][0]++;
            cont = false;
        }
        else if(selection == 'd'){
            display[choice -1 ][1]++;
            cont = false;
        }
        else{
            cout << "Invalid selection, please choose 'd' or 'l': ";
            cin >> selection;
        }
    }
}