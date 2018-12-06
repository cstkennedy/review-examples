#ifndef ROOM_H_DEFINED
#define ROOM_H_DEFINED

#include <iostream>
#include <string>

/**
 * This Module contains all declrations and defintions that pertain to a
 * single room--e.g., computing the metrics for a single room or the Room
 * struct declaration.
 */

/**
 * This is a global constant. It is a variable that is set
 * at compile time and is read-only.
 * <p>
 * Note the naming convention
 */
extern const std::string UNITS;

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

    /**
     * Compute the area of this room and the cost of flooring
     * for this same room
     */
    void computeMetrics();

    /**
     * Generate and display a summary for a single (one) room
     *
     * @param prt Room for which to print the summary
     */
    void display() const;
};

/**
 * Compute the area of a room and the cost of flooring
 * for the same room
 *
 * @param r Room for which to compute all metrics
 */
//void computeRoomMetrics( Room &r );

/**
 * Prompt the user for dimensions of a single room.
 *
 * @param length variable--location--into which the length will be stored
 * @param width variable--location--into which the width will be stored
 */
void promptForDimensions( double &length, double &width );

#endif