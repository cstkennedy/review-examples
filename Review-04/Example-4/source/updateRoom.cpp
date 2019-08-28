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
#include "Aggregate.h"

using namespace std;

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main() {
    // We can now replace 5 seperate double arrays (parallel arrays)
    // with one array of Rooms.
    //
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
        // Let us use string concatenation
        double uc= 0; // temporary unit cost
        uc = promptForDouble( ("Enter the cost ($/sq " + UNITS + ")") );

        // Take note of the line below.
        // The [i] represents the location within the array.
        // The . (dot) operator is the member access operator. It allows
        // you to access one attribute of a struct (Room).
        rooms[i].unit_cost = uc;
        // We could add parens for clarity
        //(( rooms[i] ).unit_cost) = uc;

        println();

        // Note the inclusion of [i]. We are still passing one variable
        // at a time into the function--i.e., one attribute of one element of an array.
        promptForDimensions( rooms[i].length, rooms[i].width );

        computeRoomMetrics( rooms[i] );
        println();
    }

    printAllRoomSummaries( rooms, num_rooms );

    // The program completed without issue
    return 0;
}