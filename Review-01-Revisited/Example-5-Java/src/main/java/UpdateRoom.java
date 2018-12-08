// Review Example: Room Update Java Version

import java.util.Scanner;

public class UpdateRoom {
    /**
     * Prompt user for room data.
     *
     * @param units measuring units (e.g., feet, meters, or yards)
     *
     * @return 3 element array containing, in order, unit cost, length and width
     */
    public static double[] promptUser(final String units)
    {
        Scanner keyboardScanner = new Scanner(System.in);

        double unitCost = 0;
        System.out.print("Enter the cost ($/sq " + units + "): ");
        unitCost = keyboardScanner.nextDouble();

        // Print a blank line
        System.out.println();

        double width = 0;
        System.out.print("Enter the room width : ");
        width = keyboardScanner.nextDouble();

        double length = 0;
        System.out.print("Enter the room length: ");
        length = keyboardScanner.nextDouble();

        return new double[]{unitCost, length, width};
    }

    /**
     * Compute the area.
     *
     * @param l room length
     * @param w room width
     *
     * @return area
     */
    public static double computeArea(double l, double w)
    {
        return w * l;
    }

    /**
     * Compute the room cost.
     *
     * @param area square area
     * @param unitCost cost per square unit of flooring
     *
     * @return cost of flooring
     */
    public static double computeRoomCost(double area, double unitCost)
    {
        return area * unitCost;
    }

    /**
     * Print Summary.
     *
     * @param units measuring units (e.g., feet, meters, or yards)
     * @param length room length
     * @param width room width
     * @param area square area
     * @param roomCost total room flooring cost
     * @param unitCost cost per square unit of flooring
     *
     */
    public static void printSummary(final String units, double length,
                                    double width, double area, double roomCost,
                                    double unitCost
                      /*std::ostream& outs = std::cout*/)
    {
        // Print dimensions to 1 decimal place.

        // Output a Room Summary
        System.out.println();

        System.out.printf("Length : %8.1f %s%n", length, units);
        System.out.printf("Width  : %8.1f %s%n", width, units);
        System.out.printf("Area   : %8.1f %s%n", area, units);

        System.out.println();

        System.out.printf("Unit Cost : $ %8.2f %s%n", unitCost, units);
        System.out.printf("Total Cost: $ %8.2f %s%n", roomCost, units);
    }

    /**
     * Compute the area of a room and the cost of
     * flooring for the room.
     *
     * @param args collection of all command line arguments.
     */
    public static void main(String[] args)
    {
        Scanner keyboardScanner = new Scanner(System.in);

        double width  = 0;
        double length = 0;
        double area   = 0;

        double unitCost = 0;
        double roomCost = 0;

        // Display units
        String units = "ft";

        // Allow the user to process multiple rooms
        boolean tryAgain = true;

        while (tryAgain) {
            double[] input = promptUser(units);
            unitCost = input[0];
            length = input[1];
            width = input[2];

            area = computeArea(length, width);
            roomCost = computeRoomCost(area, unitCost);

            printSummary(units, length, width, area, roomCost, unitCost);
            System.out.println();

            // Prompt the user for Y/N
            char ynResponse = 'n';

            System.out.print("Process another room? (Y/N): ");
            ynResponse = keyboardScanner.next().charAt(0);
            ynResponse = Character.toUpperCase(ynResponse);

            // We can set again directly--i.e., store
            // the result of the boolean expression
            tryAgain = ynResponse == 'Y';

            // Print a blank line
            System.out.println();
        }
        // The program completed without issue
    }
}
