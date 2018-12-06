#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <iostream>

#include "Move.h"

/**
 * A Tic-Tac-Toe gameboard
 */
struct Board {
    char** the_board;

    /**
     * Construct/initialize the gameboard
     */
    Board();

    /**
     * Disassemble the gameboard
     */
    ~Board();

    /**
     * Print a gameboard
     */
    print( std::ostream &outs );
};

//void intializeBoard();

//void printBoard();


#endif