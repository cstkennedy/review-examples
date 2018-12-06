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
    bool play_again = true;

    //** while another round is desired
    while( play_again ) {
        //intializeBoard(); - Moved to playRound
        playRound();
        
        play_again = promptForYesNo( "Play another round? (Y/N)");
    }

    return 0;
}

/**
 *
 */
void playRound() {
    Board board;

    bool winner_declared = false;
    bool draw = false;

    //*** while round not over
    while( !winner_declared && !draw ) {
        //for each player
        for( int i = 1; i <= 2; i++ ) {
            Move move;

            //printBoard();
            board.print( cout );

            move = promptForMove();

            //while not validMove( move )
            while( !validMove(move) ) {
                move = promptForMove();
            }
        }

        //placeholder until remaining logic is implemented
        draw = true;
    }
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

    //placeholder
    return true;
}