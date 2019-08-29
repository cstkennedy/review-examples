// Thomas Kennedy
// CS 333 Fall 2015
// Review Example: Room Update

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

/**
 * Compute the area of a room and the cost of
 * flooring for the room
 */
int main()
{
    double width;
    double length;

    /*
     * I have separated the declaration and definition of both the width
     * and length vars.
     *
     * Setting these to some _zero_ value is referred to as initialization.
     */
    width  = 0;
    length = 0;

    /*
     * You will usually see these two steps combined.
     * E.g., I could have written:
     *
     *      double width  = 0;
     *      double length = 0;
     *
     * instead of the two separate steps.
     */

    // Let us set width and length
    width  = 8;
    length = 10;

    // Compute the area
    double area = (width * length);

    cout << "Length: " << length << "\n";
    cout << "Width : " << width  << "\n";
    cout << "\n";
    cout << "Area  : " << area   << "\n";
    cout << "\n";

    // The program completed without issue
    return 0;
}
