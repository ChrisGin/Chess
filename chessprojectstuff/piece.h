#ifndef piece.h
#define piece.h


//this class is part of when the player objects are created.
class piece //Abstract Class
{
private:
    virtual int x;
    virtual int y;
    virtual bool is_alive;
    virtual string owner;

public:
    //Mutators
    virtual void setOwner(string owner);

    virtual void setIsAlive(bool isAlive);

    virtual void setX(int x);

    virtual void setY(int y);

    //Accessors
    virtual int getX() const {return x;}

    virtual int getY() const {return y;}

    virtual string getOwner() const ;
    //Precondition: There are 2 player objects initialized before this runs
    //Postcondition: showing which player this piece belongs to.
    //Summary: checks to see who is the owner of the piece(true for player 1 false for player 2)

    virtual bool getIsAlive();
    //Precondition:this piece has been instantiated
    //Postcondition: Shows what is the state of this piece.
    //Summary: Checks if this specific piece is in a players graveyard or on the board
    virtual bool canMove(int moveX, int moveY);
    //Precondition: this piece has been instantiated.
    //Postcondition: shows if this piece can move or not
    //Summary: Checks to see if the specific piece

};



#endif // piece
