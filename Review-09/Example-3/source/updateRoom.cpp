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
 * Sort the array of rooms based on total cost
 * of flooring
 *
 * @param collection array of Rooms objects to print
 * @param count length of the array (number of rooms)
 */
void sortRooms( Room *collection, int count );

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

    println();

    // We can now allocate one array of Rooms
    rooms = new Room[ num_rooms ];

    for( int i = 0; i < num_rooms; i++ ) {
        rooms[i].setUnitCost( promptForDouble( ("Enter the cost ($/sq " + UNITS + ")") ) );
        rooms[i].setWidth(    promptForDouble( "Enter the room width"                  ) );
        rooms[i].setLength(   promptForDouble( "Enter the room length"                 ) );

        println();
    }

    sortRooms( rooms, num_rooms );
    printAllRoomSummaries( rooms, num_rooms );

    return 0;
}

/**
 *
 */
void sortRooms( Room *collection, int count ) {
    // Let us use bubble sort. In practice--i.e.,
    // outside of an academic exercise, I would use
    // a better sorting algorithm--e.g., Quicksort
    //
    // Even if I did not use Quicksort, I would never
    // use bubble sort. It is the worst possible sorting
    // algorithm. It is a worse sorting algorithm
    // than Internet Explorer is a "web browser"
    for( int i = 0; i < count; i++ ) {
        for( int j = i; j < count; j++ ) {
            //if( collection[j].flooringCost() < collection[i].flooringCost() ) {
            if( collection[j] < collection[i] ) {
                // Use the built in swap function
                swap(collection[i], collection[j]);
            }
        }
    }
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
        /*
        cout << "--Room #" << (i+1) << "\n";
        collection[i].display(cout);
        println();
        */

        cout << "--Room #" << (i+1) << "\n"
             << collection[i]
             << "\n";
    }
}