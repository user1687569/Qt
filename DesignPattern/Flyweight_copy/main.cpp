#include <iostream>
#include "piece.h"
#include "pieceboard.h"

using namespace std;

int main()
{
    PieceBoard pieceBoard("AAA", "BBB");

    pieceBoard.SetPiece(BLACK, Piece_Position(4, 4));
    pieceBoard.SetPiece(WHITE, Piece_Position(4, 16));
    pieceBoard.SetPiece(BLACK, Piece_Position(5, 7));
    pieceBoard.SetPiece(WHITE, Piece_Position(16, 4));
    pieceBoard.SetPiece(BLACK, Piece_Position(7, 8));
    return 0;
}
