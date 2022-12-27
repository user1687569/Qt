#include "pieceboard.h"


PieceBoard::PieceBoard(string blackname, string whitename)
    : m_blackname(blackname),
      m_whitename(whitename)
{
    m_blackPiece = NULL;
    m_whitePiece = NULL;
}

PieceBoard::~PieceBoard()
{
    if(m_blackPiece)
        delete m_blackPiece;
    if(m_whitePiece)
        delete m_whitePiece;
}

void PieceBoard::SetPiece(PieceColor color, Piece_Position position)
{
    if(color == BLACK)
    {
        if(m_blackPiece == NULL)
            m_blackPiece = new BlackPiece(color);
        cout << m_blackname << " at position["
             << position.x << ", " << position.y << "] ";
        m_blackPiece->Draw();
    }
    else
    {
        if(m_whitePiece == NULL)
            m_whitePiece = new WhitePiece(color);
        cout << m_whitename << " at position["
             << position.x << ", " << position.y << "] ";
        m_whitePiece->Draw();
    }

    m_vecPiecePosition.push_back(position);
}
