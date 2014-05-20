// Tui Popenoe
// Exercise 7.11

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float gradeChar(char grade);

int main(){

    int count = 0;
    char letterGrade;
    float grade;
    float total = 0;

    while(grade !=-1){

        cout << "Enter grade (-1 to exit): ";
        cin >> letterGrade;

        grade = gradeChar(letterGrade);

        if(grade == -1){
            break;
        }
        else if(grade < 0 || grade > 100){
            cout << "Invalid grade entered, enter a grade between 0 and 100\n";
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


float gradeChar(char grade){
    if(grade == 'A' || grade == 'a'){
        return 95;
    }
    else if(grade == 'B' || grade == 'b'){
        return 85;
    }
    else if(grade == 'C' || grade == 'c'){
        return 75;
    }
    else if(grade == 'D' || grade == 'd'){
        return 65;
    }
    else if(grade == 'F' || grade == 'f'){
        return 55;
    }
    else if(grade == 'Q' || grade == 'q'){
        return -1;
    }
    else{
        return 0;
    }
}