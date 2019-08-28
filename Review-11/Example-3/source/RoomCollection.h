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
 * The purpose of this class is to abstract the details (hide the details) from
 * the remainder of the code. This serves to minimize the impact in the event I
 * need to change the underlying data structure.
 */
class RoomCollection {
    private:
        /**
         *
         */
        struct Node {
            Room data;
            Node *next;

            /**
             * Construct a new NOde that
             * stores d as its data
             * and points to nullptr
             */
            Node(Room d);
        };

        /**
         * The first node in our list
         */
        Node *head;

        /**
         * The current number of Room objects.
         * <p>
         * This is not necessary for a linked list,
         * but it allows us to check the size
         * without iterating through the linked list
         */
        int actualSize;

    public:

        /**
         * Default RoomCollection constructor
         */
        RoomCollection();

        //
        // Note that I should write a Destructor
        // to deallocate the memory allocated for
        // a linked list
        //

        /**
         * Add a new Room
         */
        void add( Room toAdd );

        /**
         * Return the current size
         */
        int size() const;

        /**
         * Print all Rooms within the collection
         */
        void display( std::ostream &outs ) const;
};

inline
std::ostream& operator<<( std::ostream &outs, const RoomCollection &prt) {
    prt.display(outs);

    return outs;
}

#endif
