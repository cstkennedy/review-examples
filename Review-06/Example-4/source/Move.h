#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

//typedef int Move;

/**
 * A row-column pair 
 */
struct Move {
    int row;
    int col;

    /**
     * Default to a Move representig the center
     * of a game board
     */
    Move();

    /**
     * Create a Move
     *
     * @param r desired row
     * @param c desired column
     */
    Move( int r, int c );
};

#endif