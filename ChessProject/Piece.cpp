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
    color = 'u';
    piece_name = "unknown";
}

Piece::Piece(int x, int y, char color, string piece_name)
{
    setX(x);
    setY(y);
    setColor(color);
    setPieceName(piece_name);
}

void Piece::setPieceName(string piece_name)
{
    if((piece_name == "WKing  " || piece_name == "WQueen  " || piece_name == "WBishop1" ||
        piece_name == "WBishop2" || piece_name == "WKnight1" || piece_name == "WKnight2" ||
        piece_name == "WRook1  " || piece_name == "WRook2  " || piece_name == "WPawn1  " ||
        piece_name == "WPawn1  " || piece_name == "WPawn2  " || piece_name == "WPawn3  " ||
        piece_name == "WPawn4  " || piece_name == "WPawn5  " || piece_name == "WPawn6  " ||
        piece_name == "WPawn7  " || piece_name == "WPawn8  " || piece_name == "BKing  " ||
        piece_name == "BQueen  " || piece_name == "BBishop1" || piece_name == "BBishop2" ||
        piece_name == "BKnight1" || piece_name == "BKnight2" || piece_name == "BRook1  " ||
        piece_name == "BRook2  " || piece_name == "BPawn1  " || piece_name == "BPawn1  " ||
        piece_name == "BPawn2  " || piece_name == "BPawn3  " || piece_name == "BPawn4  " ||
        piece_name == "BPawn5  " || piece_name == "BPawn6  " || piece_name == "BPawn7  " ||
        piece_name == "BPawn8  "))
        this->piece_name = piece_name;
    else
        return;
}

void Piece::setColor(char color)
{
    color = toupper(color);
    assert((color == 'W'|| color =='B'));

    if(color == 'B' || color == 'W')
        this-> color = color;

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

