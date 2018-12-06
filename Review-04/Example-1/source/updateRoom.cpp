// Thomas Kennedy
// CS 333 Fall 2015
// Review Example: Room Update

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

#include <string>

using namespace std;

/**
 * A Room Blueprint. This struct, defines
 * a room. For the moment this is simply
 * a grouping of attributes (variables)
 * that describe a Room
 */
struct Room {
    double length;
    double width;
    double area;

    double unit_cost; ///< cost for one sq. unit of flooring
    double room_cost; ///< cost for flooring
};

/**
 * This is a global constant. It is a variable that is set
 * at compile time and is read-only.
 * <p>
 * Note the naming convention
 */
const std::string UNITS = "ft";

/**
 * Print a blank line - we will discuss the meaning of *inline*
 * in a future Review Session
 */
inline void println( std::ostream& outs=std::cout ) {
    outs << "\n";
}

/**
 * Prompt the user for a floating point, *double*, value
 *
 * @param msg message to display as a user-prompt
 * 
 * @return double value entered by the user
 */
double promptForDouble( std::string msg );

/**
 * Prompt the user for a Yes or No response
 *
 * @param msg message to display as a user-prompt
 * 
 * @return bool true if the user indicated Yes 
 *     and false otherwise
 */
bool promptForYesNo( std::string msg );

/**
 * Generate and display a summary for a single (one) room
 *
 * @param prt Room for which to print the summary
 */
void printRoomSummary( const Room &prt );

/**
 * Print a summary for every room
 *
 * @param collection array of Rooms objects to print
 * @param count length of the array (number of rooms)
 */
void printAllRoomSummaries( Room *collection, int count );

/**
 * Compute the area of a room and the cost of flooring
 * for the same room
 *
 * @param r Room for which to compute all metrics
 */
void computeRoomMetrics( Room &r );

/**
 * Prompt the user for dimensions of a single room.
 *
 * @param length variable--location--into which the length will be stored
 * @param width variable--location--into which the width will be stored
 */
void promptForDimensions( double &length, double &width );

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

/**
 *
 */
double promptForDouble( std::string msg ) {
    double value = 0;

    cout << msg << ": ";
    cin >> value;

    return value;
}

/**
 *
 */
bool promptForYesNo( std::string msg ) {
    // Prompt the user for Y/N
    char yn_response = 'n';

    cout << msg << ": ";
    cin >> yn_response;

    yn_response = toupper( yn_response );

    return (yn_response == 'Y');
}

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