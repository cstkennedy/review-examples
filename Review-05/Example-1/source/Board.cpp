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
bool Board::containsWinner() {
    // Check diagonals
    if( the_board[1][1] == 'X' || the_board[1][1] == 'O' ) {
        if ( the_board[1][1] == the_board[0][0] && the_board[1][1] == the_board[2][2] ) {
            return true;
        }
    }
    //intentionally skip the second diagonal (bottom-right to top-left)

    // Check Columns (Vertical)
    for( int i = 0; i < 3; i++ ) {
        if ( the_board[1][i] != ' ' ) {
            if ( the_board[0][i] == the_board[1][i] && the_board[1][i] == the_board[2][i] ) {
                return true;
            }
        }
    }

    // Check Rows (Horizontal)
    for( int i = 0; i < 3; i++ ) {
        if ( the_board[i][1] != ' ' ) {
            if ( the_board[i][0] == the_board[i][1] && the_board[i][1] == the_board[i][2] ) {
                return true;
            }
        }
    }

    return false;
}

/**
 *
 */
bool Board::isFull() {
    int count = 0; // number of empty cells
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            if( the_board[i][j] != ' ' ){
                count++;
            }
        }
    }

    // if the count is 9 the board is full
    return ( count == 9 );
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
