#include "Board.h"

/**
 * Construct/initialize the gameboard
 */
Board::Board() {
    //** if board exists
        //clear board
    //** Create new board

    // Create the rows
    the_board = new char*[3];

    // Create the columns
    for( int i = 0; i < 3; i++ ) {
        the_board[i] = new char[3];

        for( int j = 0; j < 3; j++ ) {
            the_board[i][j] = ' ';
        }
    }
}

/**
 * Disassemble the gameboard
 */
Board::~Board() {
    for( int i = 0; i < 3; i++ ) {
        delete[] the_board[i];
    }

    delete[] the_board;
}

/**
 *
 */
Board::print( std::ostream &outs ) {
    //**** for each row
    for( int i = 0; i < 3; i++ ) {
        //print row label
        outs << i << " ";

        //for each column
        for( int j = 0; j < 3; j++ ) {
            //print cell
            outs << the_board[i][j];
            //if applicable
            if( j < 2 ) {
                //print divider--i.e., "|"
                outs << "|";
            }
        }
        outs << "\n";
    }

    outs << "  ";

    for( int j = 0; j < 3; j++ ) {
        outs << j << " ";
    }
    outs << "\n";
}
