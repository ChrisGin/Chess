#ifndef PAWN_H_INCLUDED
#define PAWN_H_INCLUDED

// ********************************************************
// Class Name: PAWN
//
/* Description: This class provides


*/
// *******************************************************
#include "Piece.h"
#include <string>

using namespace std;

//Pawns will be pieces pointers !!!!!!
class Pawn : public Piece{

public:
    Pawn();
    Pawn(int x, int y, char color,string piece_name);
    bool canMove(int moveX, int moveY);
    void upgrade(piece* p);

};
#endif // PAWN_H_INCLUDED














































//Pawns will be pieces pointers !!!!!!
class Pawn : public Piece{

public:
    Pawn();
    Pawn(int x, int y, bool is_alive, char color, char piece_icon);
    bool canMove(int moveX, int moveY);

};
#endif // PAWN_H_INCLUDED

