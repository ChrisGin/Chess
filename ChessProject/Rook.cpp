// ********************************************************
// Name: .cpp
//
// Summary: This file
//
// Author: Yarely Chino
// Created: / /2015
// Modifications:
//
// *******************************************************
#include "Piece.h"
#include "Rook.h"
#include <cassert>

using namespace std;
Rook::Rook()
{

}

Rook::Rook(int x, int y, bool is_alive, string piece_name, char color) : Piece(x, y, is_alive, color, piece_name)
{

}


bool Rook::canMove(int moveX, int moveY)
{
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
