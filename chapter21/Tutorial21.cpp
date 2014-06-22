// Tui Popenoe
// Tutorial21.cpp

#include <iostream>
#include <string>
#include <iomanip>

#include "GradeBook.h"
#include "GradeBook.cpp"

using namespace std;

template<class T> void processGrades(GradeBook<T> &);

int main(){
    int students;
    int selection;

    cout << fixed << setprecision(2) << endl;

    cout << "\nEnter the number of students: ";
    cin >> students;

    while(students <= 0){
        cout << "\nError: Must have a positive number of students";
        cout << "\nEnter the number of students: ";
        cin >> students;
    }

    cout << "\nSelect the grade type: " << endl;
    cout << "1 - Integer" << endl;
    cout << "2 - Floating-point" << endl;
    cin >> selection;

    while(selection != 1 && selection != 2){
        cout << "\nError: Invalid choice" << endl;
        cout << "\nSelect the same grade type: " << endl;
        cout << "1 - Integer" << endl;
        cout << "2 - Floating-point" << endl;
        cin >> selection;
    }

    if(selection == 1){
        GradeBook<int> myIntGradeBook(students);
        processGrades(myIntGradeBook);
    }
    else{
        GradeBook<double> myDoubleGradeBook(students);
        processGrades(myDoubleGradeBook);
    }

    cout << endl;

    return 0;
}

template<class T> void processGrades(GradeBook<T> &myGrades){
    T grade;
    cout << endl;

    for(int i = 0; i < myGrades.getClassSize(); i++){
        cout << "Enter student " << i+1 << "'s grade (0-100): " << endl;
        cin >> grade;

        while(grade < 0 || grade > 100){
            cout << "\nError: Invalid Grade" << endl;
            cout << "Enter student " << i+1 << "'s grade (0-100): " << endl;
            cin >> grade;
        }

        myGrades.setGrade(grade, i);
    }

    cout << "\nGrade Report" << endl;
    cout << "--------------" << endl;

    myGrades.displayGrades();
    myGrades.displayStatistics();

}