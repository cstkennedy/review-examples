Title: Reviews CS 150 & CS 250
Author: Thomas J. Kennedy
TOC: yes

%define <\ExampleZip> <zipFile> {[zipFile](./zipFile)}

This section contains a selection of CS 333 Review Sessions from Fall 2015.

# Review Session 1

  The focus of the Review Session was on the following topics:

  1. Variables
  2. Input
  3. Output
  4. Output Formatting
  5. Conditional Blocks
  6. Loops

  We discussed 6 examples:
  
  - Example 0 was a brief a exploration of integer and double arithmetic. 
  - Example 1 was an initial Room Renovation tool. In this example, we discussed variables, assignment operations, and basic output.  
  - Example 2 was an refined Room Renovation tool. We discussed user input for `length` and `width`.
  - Example 3 continued our refinement process. We incorporated output formatting--specifically, fixed decimal notation. We continued the
    discussion and incorporated units of measure and cost metrics.
  - Example 4 began our discussion of if-else blocks, loops, boolean expressions, and boolean variables. We used these mechanics to process multiple rooms--instead
    of a single room.
  - Example 5 built on Example 4 and incorported `setw`, `left`, and `right` for additional formatting.  

  A recording of the Review Session is available [here](https://youtu.be/JZOl3Rah-PY).
  All source code is available in \ExampleZip{Review-01.zip}.


# Review Session 2

  During this Review Session, we discussed functions:

  1. Function Prototypes
  2. Function Definitions
  3. Parameters &amp; Arguments
    - Pass by Value
    - Pass by Reference
  4. Function Calls (Invoking Functions)
    - Individual Function Calls
    - Nested Function Calls
  5. Documenting Functions

  We discussed 6 Examples:

  - Example 1 was a direct copy of Review 1 Example 5--this was the most recent non-function based example.
  - Example 2 introduced the `promptForDouble` and `promptForYesNo` functions. We briefly discussed string concatenation.
  - Example 3 introduced the `printRoomSummary` and `computeRoomMetrics` functions. Both functions included pass-by-value and
    pass-by-reference.
  - Example 4 introduced the `promptForDimensions` function.
  - Example 5 introduced the `UNITS` global constant. I briefly discussed scope--as applicable to global variables and functions.
  - Example 6 included some closing remarks regarding functions and attributes of a room--e.g., length and width.

  Explore the documentation included with each example--click documentation.htm. Examine the call graphs. 
  Doxygen--i.e., the tool used to generate this documentation--is useful in larger programs. You are **not** expected
  to use Doxygen.

  A recording of the Review Session is available [here](https://www.youtube.com/watch?v=LAYPxKnme_c).
  All source code is available in \ExampleZip{Review-02.zip}.


# Review Session 3

  During this Review Session, we discussed _arrays_ and _structs_. The specific areas of interest included:

  1. Parameters &amp; Arguments
    - Pass by Reference
    - Pass by Constant Reference
  2. Structs
  3. Arrays (Parallel Arrays)
  4. Arrays of Structs
  5. Documenting Functions &amp; structs

  Example 1 was our starting point. It was copied from Review Session 02 Example 6. Examples 2-8--included in 
  Review-03.zip--were discussed in the context of the above topics. The Notes directory contains the Excel document
  used to visualize arrays and structs. 

  Explore the documentation included with each example--click documentation.htm. Examine the call graphs. 
  Doxygen--i.e., the tool used to generate this documentation--is useful in larger programs. You are **not** expected
  to use Doxygen in your own programs.

  A recording of the Review Session is available [here](https://youtu.be/r7jUVj7j-KE).
  All source code is available in \ExampleZip{Review-03.zip}.


# Review Session 4

  This Review Session was recorded to supplement the materials presented Section 3.2: Modules. During this Review
  Session, I revisited the Room Renovation Example from Review Sessions 2 and 3.

  All examples are included in Review-04.zip. When you extract the zip file, you will find five directories:

  1. Example 1 - The final example from Review Session 3. This version exists as a single _cpp_ file.
  2. Example 2 - This directory contains the same example with the _Utilities Module_ factored out--i.e., placed in `utilities.h` and `utilities.cpp`.
  3. Example 3 - This directory contains the same example with the _Room Module_ factored out--i.e., placed in `Room.h` and `Room.cpp`.
  3. Example 3 - This directory contains the same example with the _Aggregate Module_ factored out--i.e., placed in `Aggregate.h` and `Aggregate.cpp`.
  5. Notes - This directory contains the diagrams used in the Review Session.

  A recording of the Review Session is available [here](https://youtu.be/g64TToM3wLY).
  All source code is available in \ExampleZip{Review-04.zip}.


# Review Session 5

  During this Review Session, I discussed an implementation of Tic-Tac-Toe, in the context of 
  [Black Box Testing](../../Public/bbtesting/).

  The example directory structure differs from the traditional _source code_ structure. When you extract the zip file, you will find a single example folder, Example 1. Details on the provided files are provided within the recording. 

  A recording of the Review Session is available [here](https://youtu.be/vwNH2fPjiDs).
  All example materials are available in \ExampleZip{Review-05.zip}.


# Review Session 6

  This Review Session was recorded--i.e., there was no live session. During this Review Session, I discussed [Stepwise Refinement](../../Public/stepwise/index.html#stepwiserefinement) 
  and [Top-Down Design](../../Public/stepwise/#top-downdesign)

  I discussed stepwise refinement for the game Tic-Tac-Toe. I then presented a simliar example for top-down design. The top-down design
  was used to implement a working Tic-Tac-Toe game.

  The example code is available as Review-06.zip on the [Example Code](../ReviewCode333/) section of the 
  course site. This zip file contains two additional directories, notes and tests. Within the notes directory, you will find three documents:
  
  * Formal Test Specification
  * Stepwise Refinement
  * Top Down Design

  The tests directory contains the tests we discussed during [Review Session 5](#cs333review5).

  All of these documents were saved with Linux line endings--i.e., Windows Notepad will collapse the file to one line. Proper Text editors--e.g., Notepad++, Sublime Text,
  nano, emacs, and vi--or IDEs will properly display the files.

  A recording of the Review Session is available [here](https://youtu.be/8yAkCm5tMts).
  All example materials are available in \ExampleZip{Review-06.zip}.


# Review Session 7

  This Review Session served as our Member Functions discussion. 
  
  1. Example 1 - This is the final version of the Room Renovation Example from the Modules discussion--i.e., [Review Session 4](#cs333review4).
  2. Example 2 - This began the discussion of member functions. In this example, we took two functions--i.e., computeRoomMetrics and   
    printRoomSummary and rewrote them as member functions.
  3. Example 3 - In this example, we took the `computeMetrics` member function, `area` attribute, and `total_cost` attribute and reorganziaed 
    them into the `area` and `flooringCost` cost functions.

  Note that in this discussion, I did not cover Constructors. Place particular emphasis on Constructors as you are completing your readings.
 
  A recording of the Review Session is available [here](https://youtu.be/ZdNFwtkaqEs).
  All source code is available in \ExampleZip{Review-07.zip}.


# Review Session 8

  This Review Session served as our ADTs discussion.

  1. Example 1 - This is the final version of the Room Renovation Example from the Member Functions discussion--i.e., 
     [Review Session 7](#cs333review7). 
  2. Example 2 - In this example I discussed two _constructors_, a _Default Constructor_ (no arguments) and a 
     _Non-Default Constructor_ (with arguments). I discussed public versus private data members and
     structs versus classes.
  3. Example 3 - In this example I changed the _Room_ struct to a class. In this example I introduced _inline_ _get_ and _set_
     functions--and the rules for making functions inline. I ended the discussion of this example with an analysis of different compilation
     errors and how to interpret them.

  A recording of the Review Session is available [here](https://youtu.be/l_5R79vpmGE).
  All source code is available in \ExampleZip{Review-08.zip}.


# Review Session 9

  This Review Session served as our Operator Overloading Discussion. I discussed 7 examples. Examples 1 through 5 demonstrated the 
  
  * Logical Equivalence Operator, `operator==`
  * Less-Than (Comes-Before) Operator, `operator<`
  * Stream Insertion Operator, `operator<<` 

  Examples 6 and 7 were included to demonstrate the number of operators that can be 
  overloaded. If you take CS 330 next semester (Spring 2016), you will see the `RoomCollection`
  example refined to a complete ADT.

  A recording of the Review Session is available [here](https://youtu.be/thIpwZVYoXI).
  All source code is available in \ExampleZip{Review-09.zip}.


# Review Session 11

  This Review Session served as our *Linked Lists* discussion.

  1. Example 1 - This is the final version of the Room Renovation Example from the Operator Overloading discussion--i.e., 
     [Review Session 9](#cs333review9). 
  2. Example 2 - In this example I discussed the core of the Linked List implementation of the `RoomCollection` class.
  3. Example 3 - In this example I discussed improvements to the Linked List implementation.

  A recording of the Review Session is available [here](https://youtu.be/UhSzoU0Kblw).
  All source code is available in \ExampleZip{Review-11.zip}.
