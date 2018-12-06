#include "Room.h"
#include "utilities.h"

const std::string UNITS = "ft";

/**
 *
 */
void computeRoomMetrics( Room &r ) {
    // Compute the area
    r.area = ( r.width * r.length );

    // Compute the room cost
    r.room_cost = r.area * r.unit_cost;
}

/**
 *
 */
void promptForDimensions( double &length, double &width ) {
    width  = promptForDouble( "Enter the room width" );
    length = promptForDouble( "Enter the room length" );
}