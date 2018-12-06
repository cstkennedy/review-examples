#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#include <iostream>
#include <iomanip>

/*
 * The Utilities Module is reponsible for any functionalty that can
 * be generalized for use in any program. This includes printing a blank line
 * and printing a horizontal line.
 *
 */

/**
 * Tolerance for Floating Point Calculations
 */
extern const double EPSILON;

/**
 * Print a blank line - we will discuss the meaning of *inline*
 * in a future Review Session
 */
void println( std::ostream& outs=std::cout );

/**
 * Test two floating point numbers for equivalence
 *
 * @param num_1 value to test
 * @param num_2 value to test
 *
 * @return bool true if the numbers are equivalent and false otherwise
 */
bool equals( double num_1, double num_2 );

/**
 * Test a floating point number for equivalence to zero
 *
 * @param num value to test
 *
 * @return bool true if the number *is* zero and false otherwise
 */
bool isZero( double num );

/**
 * Print a horizontal line
 *
 * @param outs output stream--e.g., cout or ofstream
 * @param line_char character used to construct the line
 * @param width length of the line
 *
 * @pre measure does not exceed three characters in length
 */
void printHorizontalLine( std::ostream& outs, char line_char, int width );


#endif