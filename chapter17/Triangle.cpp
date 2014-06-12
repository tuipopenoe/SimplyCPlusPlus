// Tui Popenoe
// Triangle.cpp

#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int sides, double one, double two, double three) :
    Shape(sides){
        setSideOne(one);
        setSideTwo(two);
        setSideThree(three);
}

double Triangle::getSideOne(){
    return sideOne;
}

double Triangle::getSideTwo(){
    return sideTwo;
}

double Triangle::getSideThree(){
    return sideThree;
}

void Triangle::setSideOne(int length){
    sideOne = length;
}

void Triangle::setSideTwo(int length){
    sideTwo = length;
}

void Triangle::setSideThree(int length){
    sideThree = length;
}

double Triangle::calcArea(){
    double p = (getSideOne() + getSideTwo() + getSideThree()) / 2;
    return sqrt(p * (p - getSideOne()) * (p - getSideTwo()) *
        (p - getSideThree()));
}

void Triangle::print(){
    cout << "The area of the triangle is: " + calcArea();
}