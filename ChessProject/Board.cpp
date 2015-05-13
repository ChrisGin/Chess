//
//  Board.cpp
//  ChessGame

//  Created by Stephen Negron on 5/2/15.
//  Copyright (c) 2015 Stephen Negron. All rights reserved.
//

#include "Board.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Board::Board()
{
    for(int y = 0; y < Y; y++)
    {
        for(int x = 0; x < X; x++)
        {
           arrayOfNames[y][x] = "|        |";
           //arrayOfNames[y][x] = "SPACE";
        }
    }
}


void Board::showArray()
{
    for(int i = 0; i < 9; i++)
    {
        if(i == 0)
            cout << "      ";
        if(i > 0)
            cout << i << "       ";
    }
    cout << "\n" << endl;

    for(int y = 0; y < 8; y++)
    {
        switch(y)
        {
            case 0:
                cout << "A ";
                break;
            case 1:
                cout << "B ";
                break;
            case 2:
                cout << "C ";
                break;
            case 3:
                cout << "D ";
                break;
            case 4:
                cout << "E ";
                break;
            case 5:
                cout << "F ";
                break;
            case 6:
                cout << "G ";
                break;
            case 7:
                cout << "H ";
                break;
            default:
                cout << "Error" << endl;
        }

        for(int x = 0; x < X; x++)
        {
            cout << arrayOfNames[y][x];
        }
        cout << endl << endl;
    }
    cout << endl;
}

void Board::setArray(int row, int col, string piece_name)
{
    arrayOfNames[row][col] = piece_name;
}


void Board::movement(Queen Q, int x, int y)
{
    if(Q.canMove(x,y))
    {
        if(arrayOfNames[x][y] == "|        |")
        {

        }

    }
    else{

        cout<<"Wrong input\n";

    }

}
