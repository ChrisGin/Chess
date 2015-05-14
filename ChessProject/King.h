#ifndef KING_H_INCLUDED
#define KING_H_INCLUDED

// ********************************************************
// Class Name: KING
//
/* Description: This class provides


*/
// *******************************************************
#include "Piece.h"
#include <string>

using namespace std;
class King : public Piece{

public:
    King();
    King(int x, int y, bool is_alive, char color, char piece_icon);
    bool canMove(int moveX, int moveY);

};
#endif // KING_H_INCLUDED

