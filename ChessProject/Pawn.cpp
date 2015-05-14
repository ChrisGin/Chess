#include "Piece.h"
#include "Pawn.h"
#include "Queen.h"
#include "King.h"
#include "Bishop.h"
#include "Rook.h"
using namespace std;

Pawn::Pawn()
{

}

Pawn::Pawn(int x, int y, char color, string piece_name) : Piece(x, y, color)
{

}

bool Pawn::canMove(int moveX,int moveY)
{
    if (color == 'W')
    {
        if(moveY == y+1 && moveX == x)
            return true;
        else if (y == 1 &&(x>=0 && x<= 7))
        {
            if((moveY == y+1 || moveY == y+2) && moveX == x)
                return true;
        }
        else if(moveY == y-1 && moveX == x-1)
            return true;
        else if(moveY == y-1 && moveY == x+1)
            return true;
        else
            return false;
    }
    else
    {
         if(moveY == y-1 && moveX == x)
            return true;
        else if (y == 1 &&(x>=0 && x<= 7))
        {
            if((moveY == y-1 || moveY == y+2) && moveX == x)
                return true;
        }
        else if(moveY == y+1 && moveX == x-1)
            return true;
        else if(moveY == y+1 && moveY == x+1)
            return true;
        else
            return false;
    }
}

void Pawn::upgrade(piece* p)
{
    do
    {
    char response;
    cout << "Enter the Piece you would like to Upgrade to (Queen (q),Rook(r),Knight(k),or Bishop(b))"<<endl;
    cin >> response;
    switch(tolower(response))
    {
    case 'q':
        piece* p = new queen(x,y,color,piece_name);
        break;
    case 'r':
        piece* p = new rook(x,y,color,piece_name);
        break;
    case 'k':
        piece* p = new knight(x,y,color,piece_name);
        break;
    case 'b':
        piece* p = new bishop(x,y,color,piece_name);
        break;
    default:
        cout << "Wrong input" << endl;
    }
    }while(response != 'q' || response != 'r' || response != 'k' || response != 'b');
}
