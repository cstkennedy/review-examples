#ifndef ROOM_H_DEFINED
#define ROOM_H_DEFINED

#include <iostream>
#include <string>
#include <utility>

using namespace std::rel_ops;

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
class Room {
    private:
        double length;
        double width;

        double unit_cost; ///< cost for one sq. unit of flooring

    public:
        /**
         * Default Constructor
         */
        Room();

        /**
         * Second, Non-Constructor
         *
         * @param l length
         * @param w width
         * @param u cost for 1 sq unit of flooring
         *
         */
        Room( double l, double w, double u );

        /**
         * Set the length
         *
         * @param v replacement value
         */
        void setLength( double v );

        /**
         * Retrieve the length
         */
        double getLength() const;

        /**
         * Set the width
         *
         * @param v replacement value
         */
        void setWidth( double v );

        /**
         * Retrieve the width
         */
        double getWidth() const;

        /**
         * Set the unit cost
         *
         * @param v replacement value
         */
        void setUnitCost( double v );

        /**
         * Retrieve the unit cost
         */
        double getUnitCost() const;

        /**
         * Compute the area of this room
         */
        double area() const;

        /**
         * Compute the total flooring cost for this room
         */
        double flooringCost() const;

        /**
         * Generate and display a summary for a single (one) room
         *
         * @param prt Room for which to print the summary
         */
        void display(std::ostream &outs) const;

        /**
         * Logical Equivalance (Equals) Operator
         */
        bool operator==(const Room &rhs) const;

        /**
         * Less-than (Comes-Before) Operator
         */
        bool operator<(const Room &rhs) const;
};

/**
 *
 */
inline
void Room::setLength( double v ) {
    this->length = v;
}

/**
 *
 */
inline
double Room::getLength() const {
    return this->length;
}

/**
 *
 */
inline
void Room::setWidth( double v ) {
    this->width = v;
}

/**
 *
 */
inline
double Room::getWidth() const {
    return this->width;
}

/**
 *
 */
inline
void Room::setUnitCost( double v ) {
    this->unit_cost = v;
}

/**
 *
 */
inline
double Room::getUnitCost() const {
    return unit_cost;
}

/**
 * Room Stream Insertion (Output) Operator
 *
 * This is often written as a wrapper for a
 * display or print function.
 */
inline
std::ostream& operator<<( std::ostream &outs, const Room &prt ) {
    prt.display(outs);

    return outs;
}

#endif
