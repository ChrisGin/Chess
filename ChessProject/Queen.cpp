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
    if(moveX == x)
    {
        assert(0 <= moveY && moveY < 8);
        return true;
    }
    else if(moveY == y)
    {
        assert(0 <= moveY && moveY < 8);
        return true;

    }

    return false;
}
