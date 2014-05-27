// Tui Popenoe
// DVDInfo.cpp

#include <iostream>
#include <iomanip>

#include "DVDInfo.h"

using namespace std;

DVDInfo::DVDInfo(){
    setMovieTitle("null");
    setMovieLength(0);
    setBonusInfo(BonusInfo []);
}

DVDInfo::DVDInfo(string nameValue, double length, BonusInfo bonusArray){
    setMovieTitle(nameValue);
    setMovieLength(lengthValue);
    setBonusMaterial(bonusArray);
}

string DVDInfo::getMovieTitle(){
    return movieTitle;
}

void DVDInfo::setMovieTitle(string titleValue){
    movieTitle = titleValue;
}

double DVDInfo::getMovieLength(){
    return movieLength;
}

void DVDInfo::setMovieLength(double lengthValue){
    if(lengthValue > 0){
        movieLength = lengthValue;
    }
    else{
        movieLength = 0;
    }
}