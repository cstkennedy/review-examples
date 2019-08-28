// Thomas Kennedy
// CS 333 Fall 2015
// Review Example: Room Update

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>

#include "utilities.h"

#include "Room.h"

using namespace std;

/**
 * Print a summary for every room
 *
 * @param collection array of Rooms objects to print
 * @param count length of the array (number of rooms)
 */
void printAllRoomSummaries( Room *collection, int count );

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main() {
    // I will use nullptr instead of NULL. You will need
    // to enable the -std=C++11 flag in your IDE
    Room *rooms = nullptr;

    // Until we discuss dynamic arrays--specifically array "resizing"
    // we will pre-allocate a user defined number of rooms
    int num_rooms = 0;

    // Set common formatting--in this case
    // fixed decimal notation
    cout.setf( ios::fixed );

    // Prompt the user for the desired number of rooms
    cout << "How many rooms? : ";
    cin >> num_rooms;

    // We can now allocate one array of Rooms
    rooms = new Room[ num_rooms ];

    // This is count controlled--i.e., we have a priori
    // knowledge of a room count
    for( int i = 0; i < num_rooms; i++ ) {
        double uc= 0; // temporary unit cost
        uc = promptForDouble( ("Enter the cost ($/sq " + UNITS + ")") );

        rooms[i].unit_cost = uc;

        println();
        promptForDimensions( rooms[i].length, rooms[i].width );

        println();
    }

    printAllRoomSummaries( rooms, num_rooms );

    // The program completed without issue
    return 0;
}

/**
 *
 */
void printAllRoomSummaries( Room *collection, int count ) {
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
    for( int i = 0; i < count; i++ ) {
        // Note: i to (i+1) for output
        cout << "--Room #" << (i+1) << "\n";

        //printRoomSummary( collection[i] );
        collection[i].display();
        println();
    }
}