// Tui Popenoe
// Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(int, double = 1.0, double = 1.0);

        void setWidth(double);
        double getWidth();

        void setHeight(double);
        double setHeight();

        virtual double calcArea();
        virtual void print();

    private:
        double width;
        double height;
}