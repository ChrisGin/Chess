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
#include "Bishop.h"
#include <cmath>
#include <cassert>
using namespace std;

Bishop::Bishop()
{

}

Bishop::Bishop(int x, int y, bool is_alive, char color, string piece_name) : Piece(x, y, is_alive, color, piece_name)
{

}

bool Bishop::canMove(int moveX, int moveY)
{
    assert(0 <= moveY && moveY < 8);//checks board limits
    assert(0 <= moveX && moveX < 8);//checks board limits

    if(abs(moveX-x) == abs(moveY-y))
        return true;
    return false;
}
