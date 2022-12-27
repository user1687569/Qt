#ifndef PIECE_H
#define PIECE_H

enum PieceColor {
    BLACK,
    WHITE
};

struct Piece_Position{
    int x;
    int y;

    Piece_Position(int a, int b)
        : x(a), y(b) {}
};

class Piece
{
public:
    Piece(PieceColor color, Piece_Position position);
    ~Piece();

    virtual void Draw() {}

protected:
    PieceColor m_color;
    Piece_Position m_position;
};

class BlackPiece : public Piece
{
public:
    BlackPiece(PieceColor color, Piece_Position position);
    ~BlackPiece();

    void Draw();
};

class WhitePiece : public Piece
{
public:
    WhitePiece(PieceColor color, Piece_Position position);
    ~WhitePiece();

    void Draw();
};

#endif // PIECE_H
