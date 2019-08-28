#ifndef INTERACTION_H_INCLUDED
#define INTERACTION_H_INCLUDED

#include <iostream>
#include <string>

#include "Move.h"

/**
 * This module contains all functions that involve user input or file i/o.
 */

/**
 * Prompt the user for a row and column
 *
 * @return initialized Move
 */
Move promptForMove();

/**
 * Prompt the user to enter yes (y) or no (n)
 *
 * @param msg message with which to prompt the user
 *
 * @return bool true if the user specified yes and false otherwise
 *
 * @pre msg is not the empty string--i.e., !msg.empty()
 */
bool promptForYesNo( std::string msg );

#endif