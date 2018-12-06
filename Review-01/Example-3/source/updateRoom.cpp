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

    // New variables
    double unit_cost = 0;
    double room_cost = 0;

    // Let us display units
    // for the moment we will set this to ft.
    // In a later example, we will prompt the
    // user.
    string units = "ft";

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

    // Let us spruce up the output.
    // Let us print dimensions to 1 decimal place
    // and money to two decimal places

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


    // The program completed without issue
    return 0;   
}
