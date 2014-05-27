// Tui Popenoe
// DVDInfo.h

#ifndef DVDINFO_H
#define DVDINFO_H
#endif

#include <string>
#include "BonusInfo.h"

class DVDInfo{
    public:
        DVDInfo();
        DVDInfo(std::string, double, BonusInfo);

        std::string getMovieTitle();
        double getMovieLength();
        BonusInfo[] getBonusMaterial();

        void setMovieTitle(std::string);
        void setMovieLength(double);
        void setBonusMaterial(BonusInfo);

    private:
        std::string movieTitle;
        double movieLength;
        BonusInfo bonusMaterial[];
};