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
    // I have moved all variable declarations to the top.
    // I have combined the initializations and declarations.
    double width  = 0;
    double length = 0;
    double area   = 0;

    // Let us display units
    // for the moment we will set this to ft.
    // In a later example, we will prompt the
    // user.
    string units = "ft";

    // Let us prompt the user for width and length
    // Step 1: Display a message
    // Step 2: Read the value
    cout << "Enter the room width : " << flush;
    cin >> width;

    cout << "Enter the room length: " << flush;
    cin >> length;

    // Compute the area
    area = ( width * length );

    // Output a Room Summary
    cout << "\n"
         << "Length: " << length << " " << units << "\n"
         << "Width : " << width  << " " << units << "\n"
         << "\n"
         << "Area  : " << area   << " " << "sq " << units << "\n"
         << "\n";

    // The program completed without issue
    return 0;   
}
