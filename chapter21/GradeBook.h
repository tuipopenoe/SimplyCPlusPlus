// Tui Popenoe
// GradeBook.h

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

using namespace std;

template<class T> class GradeBook{
    public:
        GradeBook(int);

        int getClassSize();
        void setClassSize(int);

        T getGrade(int);
        void setGrade(T, int);

        void displayGrades();
        T getMinimum();
        T getMaximum();

        double getAverage();
        void displayStatistics();

    private:
        int classSize;
        T *grades;
};

#endif