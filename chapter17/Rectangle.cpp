// Tui Popenoe
// Rectangle.cpp

#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int sides, double w, double h) : Shape(sides) {
    setWidth(w);
    setHeight(h);
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getHeight(){
    return height;
}

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setHeight(double h){
    height = w;
}

double Rectangle::calcArea(){
    return getWidth() * getHeight();
}

void Rectangle::print(){
    cout << "The area of the rectangle is: " + calcArea();
}