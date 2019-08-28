#include <iomanip>
#include <algorithm>
#include <utility>
#include <cassert>

#include "RoomCollection.h"

using namespace std;

// Automatic <=, >, >=, != operator generation
// based on Room::operator== and Room::operator<
using namespace std::rel_ops;

/**
 *
 */
RoomCollection::RoomCollection() {
    actualSize = 0;
}

/**
 *
 */
void RoomCollection::add( Room toAdd ) {
    assert( actualSize < MAX_ROOMS );

    rooms[actualSize] = toAdd;
    actualSize++;

    // Or written as one line
    //rooms[actualSize++] = toAdd;
}

/**
 *
 */
int RoomCollection::size() const {
    return this->actualSize;
}

/**
 *
 */
void RoomCollection::sort() {
    std::sort(&rooms[0], &rooms[actualSize]);
}

/**
 *
 */
Room& RoomCollection::operator[]( int loc ) {
    return rooms[loc];
}

/**
 * Print all Rooms within the collection
 */
void RoomCollection::display( std::ostream &outs ) const {
    /*
     * This is the standard array for loop.
     * It is used every time an operation needs
     * to be performed on every element in an
     * array--e.g.,
     *   - Input
     *   - Output
     *   -  Aggregation
     *     - Average
     *     - Sum
     *     - Minimum
     *     - Maximum
     *
     * The first element in an array starts at index 0
     * and stops at index n-1. For an array for 4 elements,
     * the indices run the gamut of 0 to 3--i.e., 0, 1, 2, 3.
     *
     * Array indices are always between 0 and size-1, inclusive.
     */
    for( int i = 0; i < actualSize; i++ ) {
        // Note: i to (i+1) for output
        cout << "--Room #" << (i+1) << "\n"
             << rooms[i]
             << "\n";
    }
}