#include "Interaction.h"

/**
 * Prompt the user for an integer value
 *
 * @param msg message with which to prompt the user
 *
 * @return double value input by the user
 *
 * @pre msg is not the empty string--i.e., !msg.empty()
 */
double promptForInt( std::string msg );

/**
 *
 */
double promptForInt( std::string msg ) {
    int ipt = 0; // Value entered by the user

    std::cout << msg << ": ";
    std::cin >> ipt;

    return ipt;
}

/**
 *
 */
Move promptForMove() {
    int row = promptForInt( "Enter the row" );
    int col = promptForInt( "Enter the column" );

    return Move( row, col );
}

/**
 *
 */
bool promptForYesNo( std::string msg ) {
    char yn_resp = 'n';

    std::cout << msg << ": ";
    std::cin >> yn_resp;

    // Convert Response to lowercase.
    yn_resp = tolower( yn_resp );

    return ( yn_resp == 'y' );
}
