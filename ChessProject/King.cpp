#include "Piece.h"
#include "King.h"
#include <cmath>
using namespace std;

King::King()
{

}

King::King(int x, int y, char color, char piece_name) : Piece(x, y, color)
{

}

bool King::canMove(int moveX,int moveY)
{
    assert(0 <= moveY && moveY < 8);//checks board limits
    assert(0 <= moveX && moveX < 8);//checks board limits
    if((abs(moveX-x == 1)|| abs(moveX-x == 0)&&abs(moveY-y == 0) || (moveY-y == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
