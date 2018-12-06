#include <iomanip>

#include "Room.h"
#include "utilities.h"

using std::cout;
using std::setw;
using std::left;
using std::right;

const std::string UNITS = "ft";

/**
 *
 */
void Room::computeMetrics() {
    //--Note the _this_ self pointer
    //
    // Compute the area
    //this->area = ( this->width * this->length );

    // Compute the room cost
    //this->room_cost = this->area * this->unit_cost;

    // Should we split this function?

    // Compute the area
    area = ( width * length );

    // Compute the room cost
    room_cost = area * unit_cost;
}

/**
 *
 */
void Room::display() const {
    // Print dimensions to 1 decimal place.        
    cout.precision(1);  

    // Let us add spacing--simulate a table
    println();

    cout << left  << setw(6) << "Length"  << ": "
         << right << setw(8) << length    << " " << UNITS << "\n";

    cout << left  << setw(6) << "Width"   << ": "
         << right << setw(8) << width     << " " << UNITS  << "\n";

    cout << left  << setw(6) << "Area"    << ": "
         << right << setw(8) << area      << " sq " << UNITS << "\n";

    println();

    // Update to two decimal places for money
    cout.precision(2);

    // Let us hard-code the left column for this portion
    // of the output
    cout << "Unit Cost : $ " << right << setw(8) << unit_cost << "\n"
         << "Total Cost: $ " << right << setw(8) << room_cost << "\n";
}

/**
 *
 */
void promptForDimensions( double &length, double &width ) {
    width  = promptForDouble( "Enter the room width" );
    length = promptForDouble( "Enter the room length" );
}