// Tui Popenoe
// BonusInfo.h

#ifndef BONUSINFO_H
#define BONUSINFO_H
#endif

#include <string>

class BonusInfo{
    public:
        BonusInfo();
        BonusInfo(std::string, double);

        std::string getName();
        double getItemLength();

        void setName(std::string);
        void setItemLength(double);

    private:
        std::string name;
        double itemLength;
};