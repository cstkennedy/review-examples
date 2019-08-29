// Thomas Kennedy
// CS 333 Summer 2014
// Review Example: Arithmetic

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Integer Input
    int num_1    = 1;  // First integer
    int num_2    = 2;  // Second integer

    // Results of integer arithmetic
    int i_addition       = 0;
    int i_subtraction    = 0;
    int i_multiplication = 0;
    int i_division       = 0;
    int i_modulus        = 0;

    // Double Input
    double num_3 = 1;  // First real number
    double num_4 = 2;  // Second real number

    // Results of double arithmetic
    double d_addition       = 0;
    double d_subtraction    = 0;
    double d_multiplication = 0;
    double d_division       = 0;

    // Prompt the user for 2 integers
    cout << "Enter a value for num_1: ";
    cin >> num_1;

    cout << "Enter a value for num_2: ";
    cin >> num_2;

    cout << "\n";

    // Perform integer arithmetic
    i_addition       = num_1 + num_2;
    i_subtraction    = num_1 - num_2;
    i_multiplication = num_1 * num_2;
    i_division       = num_1 / num_2;
    i_modulus        = num_1 % num_2;  // % is the remainder from integer division

    // Output the results
    cout << left << setw(18) << "Addition"       << ": "<< right << setw(8) << i_addition       << "\n"
         << left << setw(18) << "Subtraction"    << ": "<< right << setw(8) << i_subtraction    << "\n"
         << left << setw(18) << "Multiplication" << ": "<< right << setw(8) << i_multiplication << "\n"
         << left << setw(18) << "Division"       << ": "<< right << setw(8) << i_division       << "\n"
         << left << setw(18) << "Modulus"        << ": "<< right << setw(8) << i_modulus        << "\n"
         << "\n";

    // Prompt the user for 2 real numbers
    cout << "Enter a value for num_3: ";
    cin >> num_3;

    cout << "Enter a value for num_4: ";
    cin >> num_4;

    cout << "\n";

    //Perform double arithmetic
    d_addition       = num_3 + num_4;
    d_subtraction    = num_3 - num_4;
    d_multiplication = num_3 * num_4;
    d_division       = num_3 / num_4;

    // Formatting
    cout.setf( ios::fixed );
    cout.precision(4);

    /*
     As an alternative, formatting could be applied using:
        cout << fixed << setprecision(4)
    */

    cout << left << setw(18) << "Addition"       << ": "<< right << setw(8) << d_addition       << "\n"
         << left << setw(18) << "Subtraction"    << ": "<< right << setw(8) << d_subtraction    << "\n"
         << left << setw(18) << "Multiplication" << ": "<< right << setw(8) << d_multiplication << "\n"
         << left << setw(18) << "Division"       << ": "<< right << setw(8) << d_division       << "\n"
         << "\n";

    return 0;
}
