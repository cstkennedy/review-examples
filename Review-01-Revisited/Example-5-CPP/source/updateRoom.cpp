// Review Example: Room Update C++ Version

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

#include <string>

using namespace std;

/**
 * Prompt user for room data.
 *
 * @param units measuring units (e.g., feet, meters, or yards)
 * @param width room width
 * @param length room length
 * @param unit_cost cost per square unit of flooring
 *
 * @return false if an input error occurred
 */
bool promptUser(const std::string& units,
                double& width, double& length, double& unit_cost);

/**
 * Compute the area.
 *
 * @param l room length
 * @param w room width
 *
 * @return area
 */
double computeArea(double l, double w);

/**
 * Compute the room cost.
 *
 * @param area square area
 * @param unit_cost cost per square unit of flooring
 *
 * @return cost of flooring
 */
double computeRoomCost(double area, double unit_cost);

/**
 * Print Summary.
 *
 * @param units measuring units (e.g., feet, meters, or yards)
 * @param length room length
 * @param width room width
 * @param area square area
 * @param room_cost total room flooring cost
 * @param unit_cost cost per square unit of flooring
 * @param outs output destination (e.g., standard out)
 */
void printSummary(const std::string& units, double length, double width,
                  double area, double room_cost, double unit_cost,
                  std::ostream& outs = std::cout);

/**
 * Compute the area of a room and the cost of
 * flooring for the room.
 *
 * @param argc number of command line arguments
 * @param argv collection of all command line arguments.
 */
int main()
{
    double width  = 0;
    double length = 0;
    double area   = 0;

    double unit_cost = 0;
    double room_cost = 0;

    // Display units
    string units = "ft";

    // Set common formatting--in this case, fixed decimal
    // notation
    cout.setf(ios::fixed);

    // Allow the user to process multiple rooms
    bool try_again = true;

    while (try_again) {
        promptUser(units, length, width, unit_cost);

        area = computeArea(length, width);
        room_cost = computeRoomCost(area, unit_cost);

        printSummary(units, length, width, area, room_cost, unit_cost);
        cout << "\n";

        // Prompt the user for Y/N
        char yn_response = 'n';

        cout << "Process another room? (Y/N): ";
        cin >> yn_response;
        yn_response = toupper(yn_response);

        // We can set again directly--i.e., store
        // the result of the boolean expression
        try_again = yn_response == 'Y';

        // Print a blank line
        cout << "\n";
    }

    // The program completed without issue
    return 0;
}

//------------------------------------------------------------------------------
bool promptUser(const std::string& units,
                double& width, double& length, double& unit_cost)
{
    // Prompt the user for unit cost--in
    // $ per sq. unit
    cout << "Enter the cost ($/sq " << units << "): ";
    cin >> unit_cost;

    // Print a blank line
    cout << "\n";

    // Prompt the user for width and length
    //   Step 1: Display a message
    //   Step 2: Read the value
    cout << "Enter the room width : " << flush;
    cin >> width;

    cout << "Enter the room length: " << flush;
    cin >> length;

    return cin.good();
}

//------------------------------------------------------------------------------
inline
double computeArea(double l, double w)
{
    return w * l;
}

//------------------------------------------------------------------------------
inline
double computeRoomCost(double area, double unit_cost)
{
    return area * unit_cost;
}

//------------------------------------------------------------------------------
void printSummary(const std::string& units, double length, double width,
                  double area, double room_cost, double unit_cost,
                  std::ostream& outs)
{
    // Print dimensions to 1 decimal place.
    outs.precision(1);

    // Output a Room Summary
    outs << "\n";

    outs << left  << setw(6) << "Length" << ": "
         << right << setw(8) << length   << " " << units << "\n";

    outs << left  << setw(6) << "Width" << ": "
         << right << setw(8) << width   << " " << units  << "\n";

    outs << left  << setw(6) << "Area" << ": "
         << right << setw(8) << area   << " sq " << units << "\n";

    outs <<  "\n";

    // Update to two decimal places for money
    outs.precision(2);

    // Let us hard-code the left column for this portion
    // of the output
    outs << "Unit Cost : $ " << right << setw(8) << unit_cost << "\n"
         << "Total Cost: $ " << right << setw(8) << room_cost << "\n";
}
