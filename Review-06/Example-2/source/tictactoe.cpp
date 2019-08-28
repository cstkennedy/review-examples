#include <iostream>
#include <iomanip>

#include "utilities.h"

#include "Interaction.h"
#include "Move.h"
#include "Board.h"

using namespace std;

/**
 * Play one full round of Tic-Tac-Toe
 */
void playRound();

/**
 * Validate a move
 *
 * @param move
 *
 * @returns boolean true if the move is valid and false otherwise
 */
bool validMove( Move move );

/**
 * This program does not accept any command line arguments
 */
int main() {
    //* Play Tic-Tac-Toe
    //** while another round is desired
        intializeBoard();
        playRound();
        promptForYesNo( "Play another round? (Y/N)");

    return 0;
}

/**
 *
 */
void playRound() {
    Move move;

    //*** while round not over
        //for each player
            printBoard();
            move = promptForMove();

            //while not validMove( move )
                move = promptForMove();
}

/**
 *
 */
bool validMove( Move move ) {
    //***** if row is valid && column is valid
            //if move has not already been made
                //return true
            //return false
    //***** return false
}