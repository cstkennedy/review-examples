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
 * Compute the area of a room and the cost of 
 * flooring for the room
 */
int main() {
    double width  = 0;
    double length = 0;
    double area   = 0;

    double unit_cost = 0;
    double room_cost = 0;

    bool try_again = true;

    // Let us display units
    // for the moment we will set this to ft.
    // In a later example, we will prompt the
    // user.
    string units = "ft";

    // Set common formatting--in this case, fixed decimal
    // notation
    cout.setf( ios::fixed );

    // Allow the user to process multiple rooms 
    while( try_again ){
        // Prompt the user for unit cost--in 
        // $ per sq. unit
        //cout << "Enter the cost ($/sq " << units << "): ";
        //cin >> unit_cost;

        // Let us use string concatenation
        unit_cost = promptForDouble( 
            ( "Enter the cost ($/sq " + units + ")" )
        );

        // Print a blank line
        cout << "\n";

        // Prompt the user for width and length
        //cout << "Enter the room width : " << flush;
        //cin >> width;
        width = promptForDouble( "Enter the room width" );

        //cout << "Enter the room length: " << flush;
        //cin >> length;
        length = promptForDouble( "Enter the room length" );

        // Compute the area
        area = ( width * length );

        // Compute the room cost
        room_cost = area * unit_cost;

        // Print dimensions to 1 decimal place.        
        cout.precision(1);  

        // Let us add spacing--simulate a table

        // Output a Room Summary
        cout << "\n";

        cout << left  << setw(6) << "Length" << ": "
             << right << setw(8) << length   << " " << units << "\n";

        cout << left  << setw(6) << "Width" << ": "
             << right << setw(8) << width   << " " << units  << "\n";

        cout << left  << setw(6) << "Area" << ": "
             << right << setw(8) << area   << " sq " << units << "\n";

        cout <<  "\n";

        // Update to two decimal places for money
        cout.precision(2);

        // Let us hard-code the left column for this portion
        // of the output
        cout << "Unit Cost : $ " << right << setw(8) << unit_cost << "\n"
             << "Total Cost: $ " << right << setw(8) << room_cost << "\n";

        // Print a blank line
        cout << "\n";

        try_again = promptForYesNo( "Process another room? (Y/N)" );

        // Print a blank line
        cout << "\n";
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

    // Let us convert the user response to upper case.
    // We will use the built-in toupper function.
    yn_response = toupper( yn_response );

    // We can set again directly--i.e., store
    // the result of the condition
    //try_again = (yn_response == 'Y');
    return (yn_response == 'Y');

}