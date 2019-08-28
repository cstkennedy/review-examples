#include <iostream>
#include <iomanip>

#include "utilities.h"

using namespace std;

typedef int Move;

void intializeBoard() {
    //** if board exists
        //clear board
    //** Create new board
}

void printBoard() {
    //**** for each row
        //print row label
        //for each column
            //print cell
            //if applicable
                //print divider--i.e., "|"
}

Move promptForMove() {
    // This is simliar to the promptForLine function
    // in the running Line Review Example

    Move m;
    return m;
}

void playRound() {
    Move move;

    //*** while round not over
        //for each player
            printBoard();
            move = promptForMove();

            //while not validMove( move )
                move = promptForMove();

}

bool validMove( Move move ) {
    //***** if row is valid && column is valid
            //if move has not already been made
                //return true
            //return false
    //***** return false
}

bool promptYesNo() {
    // This is simliar to the promptForYesNo function
    // in the running Line Review Example
}

int main(){
    //* Play Tic-Tac-Toe
    //** while another round is desired
        intializeBoard();
        playRound();
        promptYesNo();

    return 0;
}