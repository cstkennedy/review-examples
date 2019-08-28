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
 * @param units length units of measure
 * @param l length
 * @param w width
 * @param r_c cost for flooring
 * @param u_c cost for one sq. unit of flooring
 * @param area flooring required for the room--in sq. units
 */
void printRoomSummary( double l, double w, double r_c, double u_c, double area );

/**
 * Compute the area of a room and the cost of flooring
 * for the same room
 *
 * @param length
 * @param width
 * @param unit_cost
 *
 * @param area
 * @param room_cost
 */
void computeRoomMetrics( double length, double width, double unit_cost, double &area, double &room_cost );

/**
 * Prompt the user for dimensions of a single room.
 *
 * @param length variable--location--into which the length will be stored
 * @param wdith variable--location--into which the width will be stored
 */
void promptForDimensions( double &length, double &width );

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main() {
    // These 5 variables will need to become arrays.
    // We will use the pointer version of arrays
    //
    // I will use nullptr instead of NULL. You will need
    // to enable the -std=C++11 flag in your IDE
    double *width  = nullptr;
    double *length = nullptr;
    double *area   = nullptr;

    double *unit_cost = nullptr;
    double *room_cost = nullptr;

    bool try_again = true;

    // Until we discuss dynamic arrays--specifically array "resizing"
    // we will pre-allocate a user defined number of rooms
    int num_rooms = 0;

    // Set common formatting--in this case
    // fixed decimal notation
    cout.setf( ios::fixed );

    // Prompt the user for the desired number of rooms
    cout << "How many rooms? : ";
    cin >> num_rooms;

    // We can now allocate each array
    width  = new double[ num_rooms ];
    length = new double[ num_rooms ];
    area   = new double[ num_rooms ];

    unit_cost = new double[ num_rooms ];
    room_cost = new double[ num_rooms ];

    //while( try_again ){
    // This is now count controlled--i.e., we have a priori
    // knowledge of a room count
    //
    // Let us switch to a for loop
    for( int i = 0; i < num_rooms; i++ ) {
        // Let us use string concatenation
        unit_cost[i] = promptForDouble(
            ( "Enter the cost ($/sq " + UNITS + ")" )
        );

        println();

        // Some values are associated with one another--i.e.,
        // they are always used together. Can these values
        // be considered to represent one Room?

        // Note the inclusion of [i]. We are still passing one variable
        // at a time into the function--i.e., one element of an array.
        promptForDimensions( length[i], width[i] );
        computeRoomMetrics( length[i], width[i], unit_cost[i], area[i], room_cost[i] );

        //try_again = promptForYesNo( "Process another room? (Y/N)" );
        //println();
    }

    // We want to print all room summaries after all input is complete
    for( int i = 0; i < num_rooms; i++ ) {
        printRoomSummary( length[i], width[i], room_cost[i], unit_cost[i], area[i] );
        println();
    }

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
void printRoomSummary( double l, double w, double r_c, double u_c, double area ) {
    // Print dimensions to 1 decimal place.
    cout.precision(1);

    // Let us add spacing--simulate a table
    println();

    cout << left  << setw(6) << "Length" << ": "
         << right << setw(8) << l        << " " << UNITS << "\n";

    cout << left  << setw(6) << "Width" << ": "
         << right << setw(8) << w       << " " << UNITS  << "\n";

    cout << left  << setw(6) << "Area" << ": "
         << right << setw(8) << area   << " sq " << UNITS << "\n";

    println();

    // Update to two decimal places for money
    cout.precision(2);

    // Let us hard-code the left column for this portion
    // of the output
    cout << "Unit Cost : $ " << right << setw(8) << u_c << "\n"
         << "Total Cost: $ " << right << setw(8) << r_c << "\n";
}

/**
 *
 */
void computeRoomMetrics( double length, double width, double unit_cost, double &area, double &room_cost ) {
    // Compute the area
    area = ( width * length );

    // Compute the room cost
    room_cost = area * unit_cost;
}

/**
 *
 */
void promptForDimensions( double &length, double &width ) {
    width  = promptForDouble( "Enter the room width" );
    length = promptForDouble( "Enter the room length" );
}