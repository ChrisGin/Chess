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

using namespace std;

Bishop::Bishop()
{


}

Bishop::Bishop(int x, int y, bool is_alive, char color, char piece_icon) : Piece(x, y, is_alive, color)
{

}

bool Bishop::canMove(int moveX, int moveY)
{

}
