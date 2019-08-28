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

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main() {
    // I will use nullptr instead of NULL. You will need
    // to enable the -std=C++11 flag in your IDE
    RoomCollection rooms;

    // This is used simply for user input
    // it is no longer used for the container (array)
    int num_rooms = 0;

    // Prompt the user for the desired number of rooms
    cout << "How many rooms? : ";
    cin >> num_rooms;

    println();

    // Set common formatting--in this case
    // fixed decimal notation
    cout.setf( ios::fixed );

    for( int i = 0; i < num_rooms; i++ ) {
        Room new_room;

        new_room.setUnitCost( promptForDouble( ("Enter the cost ($/sq " + UNITS + ")") ) );
        new_room.setWidth(    promptForDouble( "Enter the room width"                  ) );
        new_room.setLength(   promptForDouble( "Enter the room length"                 ) );

        rooms.add(new_room);

        println();
    }

    //rooms.sort();

    //rooms.display(cout);
    cout << rooms;

    return 0;
}
