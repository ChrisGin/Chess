#ifndef piece.h
#define piece.h


//this class is part of when the player objects are created.
class piece //Abstract Class
{
private:
        virtual bool owner();
        //Precondition: There are 2 player objects initialized before this runs
        //Postcondition: showing which player this piece belongs to.
        //Summary: checks to see who is the owner of the piece(true for player 1 false for player 2)
        virtual bool isAlive();
        //Precondition:this piece has been instantiated
        //Postcondition: Shows what is the state of this piece.
        //Summary: Checks if this specific piece is in a players graveyard or on the board
       virtual bool canMove();
        //Precondition: this piece has been instantiated.
        //Postcondition: shows if this piece can move or not
        //Summary: Checks to see if the specific piece
public:

};



#endif // piece
