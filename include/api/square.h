#ifndef __DYNAMIC_CHESS_SQUARE__
#define __DYNAMIC_CHESS_SQUARE__

#include "piece.h"

class Position {
    private:
        int row;
        int col;

    public:
        Position(int row, int col);
        std::string * getName();
};

class Square {
    protected:
        Piece *piece;
        Position *pos;

    public:
        Square();
        Square(SquarePosition *pos);
        bool isEmpty(); 
        void setPosition(SquarePosition *position);
        void putPiece(Piece *p);
        Piece* removePiece();
};

#endif // __DYNAMIC_CHESS_SQUARE__