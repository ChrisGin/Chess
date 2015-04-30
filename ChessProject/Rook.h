#ifndef ROOK_H_INCLUDED
#define ROOK_H_INCLUDED

// ********************************************************
// Class Name: Roock
//
/* Description: This class provides


*/
// *******************************************************
#include "Piece.h"
#include "Rook.h"
#include <string>

using namespace std;


class Rook : public Piece{

public:
    char piece_icon;
    string piece_drawing;

private:
    Rook();
    Rook(int x, int y, bool is_alive, char color, char piece_icon);
    bool canMove(int moveX, int moveY);

};
#endif // ROOK_H_INCLUDED
