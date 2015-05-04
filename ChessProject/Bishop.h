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

    string piece_drawing;

private:
    Bishop();
//********************************************************
 /* Summary: Default constructor
    Precondition: none
    Postcondition: none*/
// *******************************************************
    Bishop(int x, int y, bool is_alive, char color,string piece_name);
//********************************************************
 /* Summary: Overloaded constructor
    Precondition: the Piece class should be design.
    Postcondition: none*/

    bool canMove(int moveX, int moveY);
//********************************************************
 /* Summary: This is the virtul method is the Piece class
    Precondition: checks if their moves are valid
    Postcondition: none*/
// *******************************************************




};

#endif // BISHOP_H_INCLUDED
