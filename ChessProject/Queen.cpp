// ********************************************************
// Name: Queen.cpp
//
// Summary: This file implements the Queen definition using the Piece class
//          and constructor
//
// Author: Yarely Chino
// Created: / /2015
// Modifications:
//
// *******************************************************
#include "Piece.h"
#include "Queen.h"
#include <cassert>
#include <cmath>

using namespace std;
Queen::Queen()
{

}

Queen::Queen(int x, int y, bool is_alive, char color, string piece_name ) : Piece(x, y, is_alive, color, piece_name)
{


}

bool Queen::canMove(int moveX, int moveY)
{
    // i still need to do the bishop moves and put them in here
    assert(0 <= moveY && moveY < 8);//checks board limits
    assert(0 <= moveX && moveX < 8);//checks board limits

    if(moveX == x)
        return true;

    else if(moveY == y)
        return true;
    if (abs(moveX-x) == abs(moveY-y))
        return true;

    return false;
}
