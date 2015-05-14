//
//  Board.h
//  ChessGame
//
//  Created by Stephen Negron on 5/2/15.
//  Copyright (c) 2015 Stephen Negron. All rights reserved.
//

#ifndef ChessGame_Board_h
#define ChessGame_Board_h
#include "Rook.h"
#include "Queen.h"
#include "Bishop.h"
#include <string>
using namespace std;

class Board
{
    static const int X = 8, Y = 8;
    const string SPACE = "SPACE";
    private:
        string arrayOfNames[Y][X];
    public:
        Board();
        void showArray();

        void setArray(int row, int col, string piece_name);

        //void movement(Knight k, int x, int y);
        void movement(Queen Q, int x, int y);
        //void movement(Pawn p, int x, int y);
        void movement(Rook r, int x, int y);
        void movement(Bishop b, int x, int y);
        //void movement(King k, int x, int y);


};

static const int X = 8, Y = 8;

#endif
