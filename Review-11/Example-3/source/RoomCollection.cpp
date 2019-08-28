#include <iomanip>
#include <algorithm>
#include <utility>
#include <cassert>

#include "RoomCollection.h"

using namespace std;

// Automatic <=, >, >=, != operator generation
// based on Room::operator== and Room::operator<
using namespace std::rel_ops;

RoomCollection::Node::Node(Room d)
    : data(d),
      next(nullptr)
{
}

/**
 *
 */
RoomCollection::RoomCollection() {
    head       = nullptr;
    actualSize = 0;
}

/**
 *
 */
void RoomCollection::add( Room toAdd ) {
    assert( actualSize < MAX_ROOMS );

    Node *newNode = new Node(toAdd);

    if( head == nullptr ) {
        // Add the very first node
        head = newNode;
    }
    else {
        // Add every other node--i.e.,
        // not the first node

        // Construct a pointer and
        // reference the head of the list
        Node *it = head;

        // Traverse the list and stop at
        // the last node
        while( it->next != nullptr ) {
            it = it->next;
        }

        // Add the new Node
        it->next = newNode;
    }

    // Increment the size
    actualSize++;
}

/**
 *
 */
int RoomCollection::size() const {
    return this->actualSize;
}

/**
 * Print all Rooms within the collection
 */
void RoomCollection::display( std::ostream &outs ) const {
    /*
     * This is the standard array for loop.
     */
    /*
    for( int i = 0; i < actualSize; i++ ) {
        // Note: i to (i+1) for output
        cout << "--Room #" << (i+1) << "\n"
             << rooms[i]
             << "\n";
    }
    */

    // This is the standard linked list
    // while loop
    /*
    Node *it = head;
    int    i = 0;

    while( it != nullptr ) {
        outs << "--Room #" << (++i) << "\n";
        (it->data).display(outs);
        outs << "\n";

        // Increment operation
        it = it->next;
    }
    */

    // This is the same loop writtin in the form of
    // a for loop
    int    i = 0;

    for( Node* it = head; it != nullptr; it = it->next ) {
        outs << "--Room #" << (++i) << "\n"
             << (it->data)          << "\n";
    }
}
