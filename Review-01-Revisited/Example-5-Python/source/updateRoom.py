# Review Example: Room Update Python3

import sys


def promptUser(units):
    """
     * Prompt user for room data.
     *
     * @param units measuring units (e.g., feet, meters, or yards)
     * @param width room width
     * @param length room length
     * @param unit_cost cost per square unit of flooring
     *
     * @return false if an input error occurred
    """

    # Prompt the user for unit cost--in
    # $ per sq. unit
    unit_cost = input("Enter the cost ($/sq " + units + "): ")

    # Print a blank line
    print()

    # Prompt the user for width and length
    #   Step 1: Display a message
    #   Step 2: Read the value
    width = input("Enter the room width : ")
    length = input("Enter the room length: ")

    return (float(unit_cost), float(width), float(length))


def computeArea(l, w):
    """
     * Compute the area.
     *
     * @param l room length
     * @param w room width
     *
     * @return area
    """

    return w * l



def computeRoomCost(area, unit_cost):
    """
     * Compute the room cost.
     *
     * @param area square area
     * @param unit_cost cost per square unit of flooring
     *
     * @return cost of flooring
    """

    return area * unit_cost


def printSummary(units, length, width, area, room_cost, unit_cost):
    """
     * Print Summary.
     *
     * @param units measuring units (e.g., feet, meters, or yards)
     * @param length room length
     * @param width room width
     * @param area square area
     * @param room_cost total room flooring cost
     * @param unit_cost cost per square unit of flooring
     * @param outs output destination (e.g., standard out)
    """

    # Print dimensions to 1 decimal place.

    # Output a Room Summary
    print()

    print("Length : {:8.1f} {}%n".format(length, units))
    print("Width  : {:8.1f} {}".format(width, units))
    print("Area   : {:8.1f} {}".format(area, units))
    print()
    print("Unit Cost : $ {:8.2f} {}".format(unit_cost, units))
    print("Total Cost: $ {:8.2f} {}".format(room_cost, units))


def main():
    """
     * Compute the area of a room and the cost of
     * flooring for the room.
     *
     * @param argc number of command line arguments
     * @param argv collection of all command line arguments.
    """


    # Display units
    units = "ft"

    # Allow the user to process multiple rooms
    try_again = True

    while try_again:
        unit_cost, width, length = promptUser(units)

        area = computeArea(length, width)
        room_cost = computeRoomCost(area, unit_cost)

        printSummary(units, length, width, area, room_cost, unit_cost)
        print()

        # Prompt the user for Y/N
        yn_response = input("Process another room? (Y/N): ")
        yn_response = yn_response.upper()

        # We can set again directly--i.e., store
        # the result of the boolean expression
        try_again = yn_response == 'Y'

        # Print a blank line
        print()
    

    # The program completed without issue


if __name__ == "__main__":
    main()