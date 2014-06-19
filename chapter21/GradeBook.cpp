// Tui Popenoe
// GradeBook.cpp

#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

template<class T> GradeBook<T>::GradeBook(int size){
    setClassSize(size);

    grades = new T[classSize];

    for(int i = 0; i < classSize; i++){
        grades[i] = 0;
    }
}

template<class T> int GradeBook<T>::getClassSize(){
    return classSize;
}

template<class T> void GradeBook<T>::setClassSize(int value){
    classSize = value;
}

template<class T> T GradeBook<T>::getGrade(int index){
    return grades[index];
}

template<class T> void GradeBook<T>::setGrade(T value, int index){
    grades[index] = value;
}

template<class T> void GradeBook<T>::displayGrades(){
    cout << "Student #      Grade" << endl;
    for(int student = 0; student < classSize; student++){
        cout << setw(5) << student + 1 << setw(13) << grades[student] << endl;
    }
}

template<class T> T GradeBook<T>::getMinimum(){
    T lowGrade = grades[0];

    for(int i = 0; i < classSize; i++){
        if(grades[i] < lowGrade){
            lowGrade = grades[i];
        }
    }

    return lowGrade;
}

template<class T> T GradeBook<T>::getMaximum(){
    T highGrade = grades[0];

    for(int i = 0; i < classSize; i++){
        if(grades[i] > highGrade){
            highGrade = grades[i];
        }
    }

    return highGrade;
}

template<class T> double GradeBook<T>::getAverage(){
    T total = 0;
    for(int i = 0; i < classSize; i++){
        total += grades[i];
    }
    return total/classSize;
}

template<class T> void GradeBook<T>::displayStatistics(){
    cout << "\nClass average grade: " << getAverage() << endl;
    cout << "Class minimum grade: " << getMinimum() << endl;
    cout << "Class maximum grade: " << getMaximum() << endl;
}