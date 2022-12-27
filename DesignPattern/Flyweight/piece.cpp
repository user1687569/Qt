#include "piece.h"
#include <iostream>

using namespace std;

Piece::Piece(PieceColor color)
    : m_color(color)
{

}

Piece::~Piece()
{

}

BlackPiece::BlackPiece(PieceColor color)
    : Piece(color)
{

}

BlackPiece::~BlackPiece()
{

}

void BlackPiece::Draw()
{
    cout << "Draw Black Piece..." << endl;
}

WhitePiece::WhitePiece(PieceColor color)
    : Piece(color)
{

}

WhitePiece::~WhitePiece()
{

}

void WhitePiece::Draw()
{
    cout << "Draw White Piece..." << endl;
}
