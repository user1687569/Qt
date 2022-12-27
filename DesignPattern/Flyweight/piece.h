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
    Piece(PieceColor color);
    ~Piece();

    virtual void Draw() {}

protected:
    PieceColor m_color;
};

class BlackPiece : public Piece
{
public:
    BlackPiece(PieceColor color);
    ~BlackPiece();

    void Draw();
};

class WhitePiece : public Piece
{
public:
    WhitePiece(PieceColor color);
    ~WhitePiece();

    void Draw();
};

#endif // PIECE_H
