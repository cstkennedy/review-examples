#ifndef ROOM_COLLECTION_H_INCLUDED
#define ROOM_COLLECTION_H_INCLUDED

#include "Room.h"

/**
 * Demonstrate a compiler directive
 * instead of a c++ constant
 */
#define MAX_ROOMS 100

/**
 * This class serves as a container of Room objects.
 * <p>
 * The purpose of this class is to abstract the
 * details (hide the details) from the remainder of
 * the code. This serves to minimize the impact
 * in the event I need to change the underlying data
 * structure.
 */
class RoomCollection {
    private:
        /**
         * Array of Room objects
         */
        Room rooms[MAX_ROOMS];

        /**
         * The actual number of Room objects
         */
        int actualSize;

    public:

        /**
         * Default RoomCollection constructor
         */
        RoomCollection();

        /**
         * Add a new Room
         */
        void add(Room toAdd);

        /**
         * Sort the Rooms
         */
        void sort();

        /**
         * Return the current size
         */
        int size() const;

        /**
         * Array Subscript Operator
         */
        Room& operator[](int loc);

        /**
         * Print all Rooms within the collection
         */
        void display(std::ostream &outs) const;

};

inline
std::ostream& operator<<(std::ostream &outs, const RoomCollection &prt) {
    prt.display(outs);

    return outs;
}

#endif
