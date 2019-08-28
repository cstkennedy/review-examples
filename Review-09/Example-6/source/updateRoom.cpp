// Thomas Kennedy
// CS 333 Fall 2015
// Review Example: Room Update

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include <utility>

#include "utilities.h"

#include "Room.h"
#include "RoomCollection.h"

using namespace std;

// Automatic <=, >, >=, != operator generation
// based on Room::operator== and Room::operator<
using namespace std::rel_ops;

/**
 * Print a summary for every room
 *
 * @param collection array of Rooms objects to print
 * @param count length of the array (number of rooms)
 */
void printAllRoomSummaries( RoomCollection collection );

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main() {
    // I will use nullptr instead of NULL. You will need
    // to enable the -std=C++11 flag in your IDE
    RoomCollection rooms;

    // Until we discuss dynamic arrays--specifically array "resizing"
    // we will pre-allocate a user defined number of rooms
    int num_rooms = 0;

    // Set common formatting--in this case
    // fixed decimal notation
    cout.setf( ios::fixed );

    // Prompt the user for the desired number of rooms
    cout << "How many rooms? : ";
    cin >> num_rooms;

    println();

    for( int i = 0; i < num_rooms; i++ ) {
        Room new_room;

        new_room.setUnitCost( promptForDouble( ("Enter the cost ($/sq " + UNITS + ")") ) );
        new_room.setWidth(    promptForDouble( "Enter the room width"                  ) );
        new_room.setLength(   promptForDouble( "Enter the room length"                 ) );

        rooms.add(new_room);

        println();
    }

    //sortRooms( rooms, num_rooms );
    rooms.sort();

    printAllRoomSummaries( rooms );

    return 0;
}

/**
 *
 */
void printAllRoomSummaries( RoomCollection collection ) {
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
    for( int i = 0; i < collection.size(); i++ ) {
        // Note: i to (i+1) for output
        cout << "--Room #" << (i+1) << "\n"
             << collection[i]
             << "\n";
    }
}