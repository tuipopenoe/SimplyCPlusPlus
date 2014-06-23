// Tui Popenoe
// CollegeApplication.h

#ifndef COLLEGEAPPLICATIONS_H
#define COLLEGEAPPLICATIONS_H

using namespace std;

template<class T> class CollegeApplications{
    public:
        CollegeApplications(int);

        int getClassSize();
        void setClassSize(int);

        T getGPA(int);
        void setGPA(T, int);

        int getSAT(int);
        void setSAT(int, int);

        void displayGPAs();

        T calculateAverage();
        void displayStatistics();

    private:
        int classSize;
        T* gpas;
        int* sats;
};

#endif