#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

// ********************************************************
// Class Name: Piece
//  By: Yarely Chino
//
/* Description: This file declares the Piece class with one virtual method

*/
// *******************************************************

//this class is part of when the player objects are created.
class Piece //Abstract Class
{
protected:
    int x;
    int y;
    bool is_alive;
    char color;

public:

    Piece();
//********************************************************
 /* Summary: Default constructor
    Precondition: none
    Postcondition: none*/
// *******************************************************

    Piece(int x, int y, bool is_alive, char color);
//********************************************************
 /* Summary: Overloaded constructor
    Precondition: none
    Postcondition: none*/
// *********************************************************
    //Mutators
    void setColor(char color);
//********************************************************
 /* Summary: Sets the color variable
    Precondition: can only be white or black
    Postcondition: none*/
// *********************************************************

    void setIsAlive(bool is_alive);
//********************************************************
 /* Summary: sets the is alive member variable
    Precondition: can only be true or false
    Postcondition: none*/
// *********************************************************

    void setX(int x);
//********************************************************
 /* Summary: sets the x member variable this can only-1,7
    Precondition: x can only be -1,7(-1 meaning its killed)
    Postcondition: none*/
// *********************************************************

    void setY(int y);
//********************************************************
 /* Summary: sets the y member variable this can only-1,7
    Precondition: y can only be -1,7(-1 meaning its killed)
    Postcondition: none*/
// *********************************************************

    //Accessors
    int getX() const {return x;}
//********************************************************
 /* Summary: returns the x member variable
    Precondition: none
    Postcondition: none*/
// *********************************************************

    int getY() const {return y;}
//********************************************************
 /* Summary: returns the x member variable
    Precondition: none
    Postcondition: none*/
// *********************************************************

    char getColor() const {return color;}
    //Precondition: There are 2 player objects initialized before this runs
    //Postcondition: showing which player this piece belongs to.
    //Summary: checks to see who is the owner of the piece(true for player 1 false for player 2)

    bool getIsAlive() const {return is_alive;}
    //Precondition:this piece has been instantiated
    //Postcondition: Shows what is the state of this piece.
    //Summary: Checks if this specific piece is in a players graveyard or on the board
    virtual bool canMove(int moveX, int moveY) = 0;
    //Precondition: this piece has been instantiated.
    //Postcondition: shows if this piece can move or not
    //Summary: Checks to see if the specific piece

};




#endif // PIECE_H_INCLUDED
