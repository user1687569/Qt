#include "pieceboard.h"


PieceBoard::PieceBoard(string blackname, string whitename)
    : m_blackname(blackname),
      m_whitename(whitename)
{

}

PieceBoard::~PieceBoard()
{
    clear();
}

void PieceBoard::SetPiece(PieceColor color, Piece_Position position)
{
    Piece* piece = NULL;
    if(color == BLACK)
    {
        piece = new BlackPiece(color, position);
        cout << m_blackname << " at position["
             << position.x << ", " << position.y << "] ";
        piece->Draw();
    }
    else
    {
        piece = new WhitePiece(color, position);
        cout << m_whitename << " at position["
             << position.x << ", " << position.y << "] ";
        piece->Draw();
    }

    m_vecPiece.push_back(piece);
}
