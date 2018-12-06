#include "utilities.h"

#include <cstdlib>
#include <cmath>

const double EPSILON = 1e-4;

/**
 * 
 */
void println( std::ostream &outs ) {
    outs << "\n";
}

/**
 *
 */
bool equals( double num_1, double num_2 ){
    return (
        abs( num_2 - num_1 ) < EPSILON
    );
}

/**
 *
 */
bool isZero( double num ) {
    // Why reinvent the wheel?
    // The equals function already does this for 
    // any two numbers
    return (
        equals( num, 0 )
    );
}

/**
 *
 */
void printHorizontalLine( std::ostream& outs, char line_char, int width ){
    outs << std::setfill( line_char ) << std::left << std::setw( width ) << line_char << "\n";
    //reset outs fill
    outs.fill( ' ' );
}

