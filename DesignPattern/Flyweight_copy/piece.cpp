#include "piece.h"
#include <iostream>

using namespace std;

Piece::Piece(PieceColor color, Piece_Position position)
    : m_color(color),
      m_position(position)
{

}

Piece::~Piece()
{

}

BlackPiece::BlackPiece(PieceColor color, Piece_Position position)
    : Piece(color, position)
{

}

BlackPiece::~BlackPiece()
{

}

void BlackPiece::Draw()
{
    cout << "Draw Black Piece..." << endl;
}




WhitePiece::WhitePiece(PieceColor color, Piece_Position position)
    : Piece(color, position)
{

}

WhitePiece::~WhitePiece()
{

}

void WhitePiece::Draw()
{
    cout << "Draw White Piece..." << endl;
}
