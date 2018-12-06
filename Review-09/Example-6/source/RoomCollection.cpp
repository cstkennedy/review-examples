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
