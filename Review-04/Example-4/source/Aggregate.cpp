#include <iostream>
#include <iomanip>

#include "utilities.h"
#include "Aggregate.h"

using namespace std;

/**
 *
 */
void printRoomSummary( const Room &prt ) {
    // Print dimensions to 1 decimal place.        
    cout.precision(1);  

    // Let us add spacing--simulate a table
    println();

    cout << left  << setw(6) << "Length"   << ": "
         << right << setw(8) << prt.length << " " << UNITS << "\n";

    cout << left  << setw(6) << "Width"   << ": "
         << right << setw(8) << prt.width << " " << UNITS  << "\n";

    cout << left  << setw(6) << "Area"   << ": "
         << right << setw(8) << prt.area << " sq " << UNITS << "\n";

    println();

    // Update to two decimal places for money
    cout.precision(2);

    // Let us hard-code the left column for this portion
    // of the output
    cout << "Unit Cost : $ " << right << setw(8) << prt.unit_cost << "\n"
         << "Total Cost: $ " << right << setw(8) << prt.room_cost << "\n";
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

        printRoomSummary( collection[i] );
        println();
    }
}
