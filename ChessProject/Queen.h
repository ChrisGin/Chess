#ifndef QUEEN_H_INCLUDED
#define QUEEN_H_INCLUDED

// ********************************************************
// Class Name: Queen.h
//
/* Description: This class creates a Queen piece, it also inherits from the Piece class


*/
// *******************************************************
#include "Piece.h"
#include <string>

using namespace std;

class Queen : public Piece{

public:

private:
    Queen();
//********************************************************
 /* Summary: Default constructor
    Precondition: none
    Postcondition: none*/
// *******************************************************
    Queen(int x, int y, bool is_alive, char color,string piece_name);
//********************************************************
 /* Summary: Overloaded constructor
    Precondition: the Piece class should be design.
    Postcondition: none*/
// *******************************************************

    bool canMove(int moveX, int moveY);
//********************************************************
 /* Summary: This is the virtul method is the Piece class
    Precondition: checks if their moves are valid
    Postcondition: none*/
// *******************************************************




};
#endif // QUEEN_H_INCLUDED
