// Tui Popenoe
// Exercise 5.13

#include <iostream>
#include <string>

using namespace std;

int gradeChar(char grade);
char charGrade(int grade);

int main(){
    char temp;
    int average;

    cout << "Enter the first grade: ";
    cin >> temp;
    average += gradeChar(temp);
    cout << "Enter the second grade: ";
    cin >> temp;
    average += gradeChar(temp);
    cout << "Enter the third grade: ";
    cin >> temp;
    average += gradeChar(temp);

    average /= 3;

    temp = charGrade(average);

    cout << "Average grade is: " << temp;

    return 0;
}

int gradeChar(char grade){
    if(grade == 'A' || grade == 'a'){
        return 4;
    }
    else if(grade == 'B' || grade == 'b'){
        return 3;
    }
    else if(grade == 'C' || grade == 'c'){
        return 2;
    }
    else if(grade == 'D' || grade == 'd'){
        return 1;
    }
    else{
        return 0;
    }
}

char charGrade(int grade){
    if(grade > 3.5){
        return 'A';
    }
    if(grade > 2.5){
        return 'B';
    }
    if(grade > 1.5){
        return 'C';
    }
    if(grade > 0.5){
        return 'D';
    }
    else{
        return 'F';
    }
}