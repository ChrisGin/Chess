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

using namespace std;

Piece::Piece()
{
    x = -1;
    y = -1;
    is_alive = true;
    color = 'u';
}

Piece::Piece(int x, int y, bool is_alive, char color)
{
    setX(x);
    setY(y);
    setIsAlive(is_alive);
    setColor(color);
}
    //Mutators
void Piece::setColor(char color)
{

    if(color == 'B' && color == 'W')
        this-> color = color;

}

void Piece::setIsAlive(bool is_alive)
{
    this-> is_alive = is_alive;

}

void Piece::setX(int x)
{
    if( x >= 0)
        this-> x = x;
}

void Piece::setY(int y)
{
    if( y >= 0)
        this-> y = y;

}

