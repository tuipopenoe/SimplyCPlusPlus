// Tui Popenoe
// Piece.h

#ifndef PIECE_H
#define PIECE_H

#include "Employee.h"

class PieceWorkerEmployee : public Employee{
    public:
        PieceWorkerEmployee(string &, string &, string &, double = 0.0,
        int = 0);

        void setPiecesMade(int);
        int getPiecesMade();

        void setPieceRate(double);
        double getPieceRate();

        virtual double earnings();
        virtual void print();

    private:
        int piecesMade;
        double pieceRate;
};

#endif