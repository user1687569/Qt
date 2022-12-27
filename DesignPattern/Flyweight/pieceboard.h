#ifndef PIECEBOARD_H
#define PIECEBOARD_H
#include "piece.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class PieceBoard
{
public:
    PieceBoard(string blackname, string whitename);
    ~PieceBoard();

    void SetPiece(PieceColor color, Piece_Position position);

private:
    string m_blackname;
    string m_whitename;
    Piece *m_blackPiece;
    Piece *m_whitePiece;
    vector<Piece_Position> m_vecPiecePosition;
};

#endif // PIECEBOARD_H
