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

        /**
         * Add a new Room
         */
        void add( Room toAdd );

        /**
         * Sort the Rooms
         * <p>
         * Sorting a linked list is a topic more
         * appropriate for CS 361. We will not
         * implement this function
         * <p>
         * If you would like to discuss how to sort a linked
         * list, we can discuss it either during my office
         * hours or via email.
         */
        //void sort();

        /**
         * Return the current size
         */
        int size() const;

        /**
         * For simplicity, we will not implement
         * this operator for our linked list
         * <p>
         * I will discuss an implementation
         * at the beginning of CS 330 next Spring.
         */
        //Room& operator[]( int loc );

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
