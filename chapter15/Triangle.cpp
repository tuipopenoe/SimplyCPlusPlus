// Tui Popenoe
// Triangle.cpp

#include <iostream>
#include <iomanip>
#include <cmath>

#include "Triangle.h"

Triangle::Triangle(){
    setSide1(3);
    setSide2(4);
    setSide3(5);
}

Triangle::Triangle(int sideValue1, int sideValue2, int sideValue3){
    setSide1(sideValue1);
    setSide2(sideValue2);
    setSide3(sideValue3);
}

int Triangle::getSide1(){
    return side1;
}

void Triangle::setSide1(int sideValue){
    if(sideValue > 0){
        side1 = sideValue;
    }
    else{
        side1 = 1;
    }
}

int Triangle::getSide2(){
    return side2;
}

void Triangle::setSide2(int sideValue){
    if(sideValue > 0){
        side2 = sideValue;
    }
    else{
        side2 = 1;
    }
}

int Triangle::getSide3(){
    return side3;
}

void Triangle::setSide3(int sideValue){
    if(sideValue > 0){
        side3 = sideValue;
    }
    else{
        side3 = 1;
    }
}

bool Triangle::isRightTriangle(){
    if(sqrt(pow(getSide1(), 2) + pow(getSide2(), 2)) == getSide3()){
        return true;
    }
    else if(sqrt(pow(getSide2(), 2) + pow(getSide3(), 2)) == getSide1()){
        return true;
    }
    else if(sqrt(pow(getSide1(), 2) + pow(getSide3(), 2)) == getSide2()){
        return true;
    }
    else{
        return false;
    }
}

bool Triangle::isEquilateralTriangle(){
    if(getSide1() == getSide2() && getSide2() == getSide3()){
        return true;
    }
    else{
        return false;
    }
}
