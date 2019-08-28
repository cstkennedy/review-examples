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
        //Addition - and not won and not draw
        for( int i = 1; i <= 2 && !draw && !winner_declared; i++ ) {
            Move move;

            //printBoard();
            board.print( cout );

            move = promptForMove();

            //while not validMove( move )
            // Addition - do not allow a player to steal a cell
            while( !validMove(move) || (board.the_board[move.row][move.col] != ' ') ) {
                // Addition
                cout << "\n";
                cout << "Let us try that again..." << "\n";

                move = promptForMove();
            }

            //Addition- apply move
            board.the_board[move.row][move.col] = ( i == 1 ? 'X' : 'O' );

            // Deviation - I forgot this logic in my design
            //placeholder until remaining logic is implemented
            //draw = true;
            winner_declared = board.containsWinner();
            draw            = board.isFull();
        }
        //Addition - trailing board print
        board.print( cout );
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

    // Deviation from design
    if ( move.row < 0 || move.row > 2 ) {
        // row is invalid
        return false;
    }

    if ( move.col < 0 || move.col > 2 ) {
        // column is invalid
        return false;
    }

    return true;
}