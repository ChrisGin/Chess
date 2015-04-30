#ifndef BISHOP_H_INCLUDED
#define BISHOP_H_INCLUDED

// ********************************************************
// Class Name: Piece
//
/* Description: This class inherits from Piece class


*/
// *******************************************************
#include "Piece.h"
#include <string>

using namespace std;

class Bishop : public Piece{

public:
    char piece_icon;
    string piece_drawing;

private:
    Bishop();
    Bishop(int x, int y, bool is_alive, char color, char piece_icon);
    bool canMove(int moveX, int moveY);

};

#endif // BISHOP_H_INCLUDED
