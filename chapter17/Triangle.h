// Tui Popenoe
// Triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape{
    public:
        Triangle(int, double = 1.0, double = 1.0, double = 1.0);

        void setSideOne(double);
        double getSideOne();

        void setSideTwo(double);
        double getSideTwo();

        void setSideThree(double);
        double getSideThree();

        virtual double calcArea();
        virtual string getType();
        virtual void print();

    private:
        double sideOne;
        double sideTwo;
        double sideThree;
};

#endif