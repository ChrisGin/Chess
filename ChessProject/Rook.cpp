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

using namespace std;
Rook::Rook()
{
    color = 'N';


}

Rook::Rook(int x, int y, bool is_alive, char color, char piece_icon) : Piece(x, y, is_alive, color)
{


}

bool Rook::canMove(int moveX, int moveY)
{


}
