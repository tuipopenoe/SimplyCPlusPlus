// Tui Popenoe
// Shape.cpp

#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int sides) : numSides(sides){

}

int Shape::getNumSides(){
    return numSides;
}

void Shape::setNumSides(int sides){
    numSides = sides;
}

void Shape::print(){

}