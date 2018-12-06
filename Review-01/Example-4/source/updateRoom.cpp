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
 * Compute the area of a room and the cost of 
 * flooring for the room
 */
int main() {
    double width  = 0;
    double length = 0;
    double area   = 0;

    double unit_cost = 0;
    double room_cost = 0;

    // A boolean variable can be either true, yes, 
    // or false, no.
    // We will use this var as our loop condition
    bool try_again;

    // Let us display units
    // for the moment we will set this to ft.
    // In a later example, we will prompt the
    // user.
    string units = "ft";

    // Allow the user to process multiple rooms

    // Force do-while loop behavior--i.e., force the
    // loop to run at least once. As an alternative, we
    // could use a do-while loop.
    try_again = true;

    while( try_again ){
        // Let us prompt the user for unit cost--in 
        // $ per sq. unit
        cout << "Enter the cost ($/sq " << units << "): ";
        cin >> unit_cost;

        // Print a blank line
        cout << "\n";

        // Let us prompt the user for width and length
        // Step 1: Display a message
        // Step 2: Read the value
        cout << "Enter the room width : " << flush;
        cin >> width;

        cout << "Enter the room length: " << flush;
        cin >> length;

        // Compute the area
        area = ( width * length );

        // Compute the room cost
        room_cost = area * unit_cost;

        // Print dimensions to 1 decimal place.
        cout.setf( ios::fixed );
        cout.precision(1);

        /*
         You will find that I favor the above method
         of setting output formatting--reproduced below:

         cout.setf( ios::fixed );
         cout.precision( 1 );

         You are more likely to see 
         the alternative:
            cout << fixed << setprecision(1) << x;

         Both methods are correct. 
        */    

        // Output a Room Summary
        cout << "\n"
             << "Length: " << length << " " << units << "\n"
             << "Width : " << width  << " " << units << "\n"
             << "Area  : " << area   << " " << "sq " << units << "\n"
             << "\n";

        // Update to two decimal places for money
        cout.precision(2);

        cout << "Unit Cost : $ " << unit_cost << "\n"
             << "Total Cost: $ " << room_cost << "\n";

        // Print a blank line
        cout << "\n";

        // Prompt the user for Y/N
        char yn_response = 'n';

        cout << "Process another room? (Y/N): ";
        cin >> yn_response;

        // Set try_again based on Y/N
        /*
        if( yn_response == 'Y' ) {
            try_again = true;
        }
        else {
            try_again = false;
        }
        */

        // While the above conditional block is correct, 
        // it is unnecessary. We can set again directly--i.e., store
        // the result of the condition
        try_again = (yn_response == 'Y');
    }

    // The program completed without issue
    return 0;   
}
