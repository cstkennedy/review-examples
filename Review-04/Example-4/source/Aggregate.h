#ifndef AGGREGTE_H_INCLUDED
#define AGGREGTE_H_INCLUDED

#include "Room.h"

/**
 * This Module contains all declrations and defintions that
 * pertain to a collection--e.g., array--of rooms.
 */

/**
 * Generate and display a summary for a single (one) room
 *
 * @param prt Room for which to print the summary
 */
void printRoomSummary( const Room &prt );

/**
 * Print a summary for every room
 *
 * @param collection array of Rooms objects to print
 * @param count length of the array (number of rooms)
 */
void printAllRoomSummaries( Room *collection, int count );

#endif