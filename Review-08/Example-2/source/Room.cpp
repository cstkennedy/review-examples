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
Room::Room() {
    this->length    = 1; // length = 1;
    this->width     = 1;
    this->unit_cost = 1;
}

/**
 *
 */
Room::Room( double l, double w, double u ) {
    length    = l; 
    width     = w;
    unit_cost = u;
}

/**
 * 
 */
double Room::area() const {
    return ( width * length );
}

/**
 * 
 */
double Room::flooringCost() const {
    return ( area() * unit_cost );
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
         << right << setw(8) << area()    << " sq " << UNITS << "\n";

    println();

    // Update to two decimal places for money
    cout.precision(2);

    // Let us hard-code the left column for this portion
    // of the output
    cout << "Unit Cost : $ " << right << setw(8) << unit_cost      << "\n"
         << "Total Cost: $ " << right << setw(8) << flooringCost() << "\n";
}

/**
 *
 *
void promptForDimensions( double &length, double &width ) {
    width  = promptForDouble( "Enter the room width" );
    length = promptForDouble( "Enter the room length" );
}
*/