// ********************************************************
// Name: Piece.cpp
//
// Summary: This file
//
// Author: Yarely Chino
// Created: / /2015
// Modifications:
//
// *******************************************************
#include "Piece.h"
#include <cassert>

using namespace std;

Piece::Piece()
{
    x = -1;
    y = -1;
    is_alive = true;
    color = 'u';
    piece_name = "unknown";
}

Piece::Piece(int x, int y, bool is_alive, char color, string piece_name)
{
    setX(x);
    setY(y);
    setIsAlive(is_alive);
    setColor(color);
    setPieceName(piece_name);
}

void Piece::setPieceName(string piece_name)
{
        for(int i = 0; piece_name[i]; i++)
            piece_name[i] = tolower(piece_name[i]);

    assert(piece_name == "king" || piece_name == "rook"
            || piece_name == "bishop" || piece_name == "queen"
            || piece_name == "knight" || piece_name ==  "pawn");

    this->piece_name = piece_name;


}
    //Mutators
void Piece::setColor(char color)
{

    if(color == 'B' || color == 'W')
        this-> color = color;

}

void Piece::setIsAlive(bool is_alive)
{
    this-> is_alive = is_alive;

}

void Piece::setX(int x)
{
    if( x >= -1 && x < 8)
        this-> x = x;
}

void Piece::setY(int y)
{
    if( y >= -1 && y < 8)
        this-> y = y;

}

