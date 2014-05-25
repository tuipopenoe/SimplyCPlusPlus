// Tui Popenoe
// Tutorial 14

#include <iostream>
#include <iomanip>

using namespace std;

const int TESTS = 3;
const int STUDENTS = 10;

void getStudentGrades(int [][TESTS]);
void displayGrades(int [][TESTS]);

int main(){
    int studentGrades[STUDENTS][TESTS] = {0};

    getStudentGrades(studentGrades);

    cout << fixed << setprecision(1);

    displayGrades(studentGrades);

    return 0;
}

void getStudentGrades(int studentGrades[][TESTS]){
    int grade = 0;

    for(int student = 0; student < STUDENTS; student++){
        cout << "\nEnter grades for student " << student + 1 << endl;

        for(int test = 0; test < TESTS; test++){
            cout << "Enter grade on test " << test + 1 << " (0-100): ";
            cin >> grade;

            while(grade < 0 || grade > 100){
                cout << "\nError: Please enter grad ein the range 0 - 100"
                    << endl;
                cout << "Enter grade on test " << test + 1 << " (0 - 100): ";
                cin >> grade;
            }

            studentGrades[student][test] = grade;
        }
    }
}

void displayGrades(int studentGrades[][TESTS]){
    double studentTotal = 0.0;
    double testTotal = 0.0;
    double classTotal = 0.0;

    cout << "\nGrade summary" << endl;
    cout << "---------------" << endl;
    cout << left << setw(14) << "Student number"
        << right << setw(8) << right << "Test 1"
        << setw(8) << "Test 2"
        << setw(8) << "Test 3"
        << setw(9) << "Average" << endl;

    for(int student = 0; student < STUDENTS; student++){
        cout << left << setw(14) << student + 1;

        for(int test = 0; test < TESTS; test++){
            int grade = studentGrades[student][test];
            cout << right << setw(8) << grade;
            studentTotal += grade;
            classTotal += grade;
        }
        cout << right << setw(9) << studentTotal / TESTS << endl;

        studentTotal = 0.0;
    }

    cout << "\n" << left << setw(14) << "Test averages";

    for(int test = 0; test < TESTS; test++){
        for(int student = 0; student < STUDENTS; student++){
            testTotal += studentGrades[student][test];
        }
        cout << right << setw(9) << testTotal / STUDENTS;

        testTotal = 0.0;
    }
    cout << endl;

    double classAverage = classTotal / (STUDENTS * TESTS);
    cout << "\nClass average: " << classAverage << endl << endl;
}