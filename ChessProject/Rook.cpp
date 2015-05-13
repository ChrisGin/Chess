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
#include <cmath>

using namespace std;
Rook::Rook()
{

}

Rook::Rook(int x, int y, char color, string piece_name) : Piece(x, y, color, piece_name)
{


}

bool Rook::canMove(int moveX, int moveY)
{
    assert(0 <= moveY && moveY < 8);//checks board limits
    assert(0 <= moveX && moveX < 8);//checks board limits

    if(moveX == x)
        return true;

    else if(moveY == y)
        return true;


    return false;
}
