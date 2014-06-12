// Tui Popenoe
// Piece.cpp

#include <iostream>
#include "Piece.h"

PieceWorkerEmployee::PieceWorkerEmployee(string &first, string &last,
    string &socialSecurityNumber, double pieceRate, int piecesMade) :
    Employee(first, last, socialSecurityNumber){
        setPieceRate(pieceRate);
        setPiecesMade(piecesMade);
}

double PieceWorkerEmployee::getPieceRate(){
    return pieceRate;
}

int PieceWorkerEmployee::getPiecesMade(){
    return piecesMade;
}

void PieceWorkerEmployee::setPieceRate(double rate){
    pieceRate = rate;
}

void PieceWorkerEmployee::setPiecesMade(int pieces){
    piecesMade = pieces;
}

double PieceWorkerEmployee::earnings(){
    return getPiecesMade() * getPieceRate();
}

void PieceWorkerEmployee::print(){
    cout << "\nPiece Worker employee: ";
    Employee::print();
}