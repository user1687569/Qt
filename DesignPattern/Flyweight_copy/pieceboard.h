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
    inline void clear(){
        int size = m_vecPiece.size();
        for(int i = 0; i < size; i++)
            delete m_vecPiece[i];
    }

private:
    string m_blackname;
    string m_whitename;
    vector<Piece *> m_vecPiece;
};

#endif // PIECEBOARD_H
