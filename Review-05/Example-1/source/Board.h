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
     * Determine if there are wither three "X" or "O" symbols in a row
     *
     * @return true if there are three such symbols in a row 
     * and false otherwise
     */
    bool containsWinner();

    /**
     * Determine if the board is full
     *
     * @return true if the board is full and false otherwise
     */
    bool isFull();

    /**
     * Print a gameboard
     */
    void print(std::ostream &outs);
};

//void intializeBoard();

//void printBoard();


#endif
