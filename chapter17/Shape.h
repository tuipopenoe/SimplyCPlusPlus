// Tui Popenoe
// Shape.h

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
    public:
        Shape(int);

        void setNumSides(int);
        int getNumSides();

        virtual double calcArea() = 0;
        virtual void print();

    private:
        int numSides;
};

#endif
