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

private:

public:
    Rook();
//********************************************************
 /* Summary: Default constructor
    Precondition: none
    Postcondition: none*/
// *******************************************************

    Rook(int x, int y, bool is_alive,char color, string piece_name);
//********************************************************
 /* Summary: Overloaded constructor
    Precondition: have the Piece class defined
    Postcondition: none*/
// *******************************************************

    bool canMove(int moveX, int moveY);
//********************************************************
 /* Summary: This is the virtul method is the Piece class
    Precondition: checks if their moves are valid
    Postcondition: none*/
// *******************************************************

};
#endif // ROOK_H_INCLUDED
