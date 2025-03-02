# Template for CPSC2720 Major Project: Text Based Adventure Game
Last Updated: 2024-10-21 by Nicole Wilson &lt;n.wilson@uleth.ca&gt;

**Design Phase:**

  Jacks Contributions:

  - Created and wrote the PDF text file for the descriptions of each class and method.
  - Edited First UML to help create final UML.
  - Thought of ideas for the design and brought them forth.

  Macs Contributions:

  - Came up with initial F1 text adventure game idea.
  - Thought of ideas for the design and brought them forth.
  - Drew up the first UML.

  Daves Contributions:

  - Thought of ideas for the design and brought them forth.

  Jonahs Contributions:

  - Came up with Prison text adventure game idea.
  - Thought of ideas for the design and brought them forth.

| November 18th 2024 - Jack |

- Hey, I've gone ahead and implemented a basic skeleton so we can start partitioning tasks.

| November 22nd 2024 - Jack |

- Hey, I've made some changes to the environmnet I did the first time. I think this one is better this time.
- There is still changes and improvements to be made, but I think it's a good start
- Let me know if there are any issues.

| November 25th 2024 - Jonah |
- I've added the Inventory class and Object abstract class
- Also added exampleObject as a concrete class for the basic implementation
- The main file in Jonahs_Branch tests these classes, just in case anybody needs an example of how to use them

| November 25nd 2024 - Mackenzie |

- Added to main (it works) with Jack and Jonah
- Added a bit to NPC class

| November 25th 2024 - David |
- Added to Player and Game classes

| December 4th 2024 - Jack |
- Been working slowly on the environment over the past few days adding Doxy, the test files, and implementing the Race Room
- Recently a error spawned out of no wear that I've never seen before.. // Ignore this
- Edit: Changed lab computers and now the include path error is gone...

| December 7th 2024 - Jack |
- Hey I've been tinkoring a little bit. I added a method in inventory the ContainerRoom needed.
- I've started writing unit tests, I found I good way to do it if you'd like to replicate.
- Let's please not leave these things last minute :D
- Incorportated InputPuzzle with Race.cpp. Made a slight change with how lose() works
- Made Lose more dynamic that you can now set when it's true or false.
  - I'll finish all my the Test for the environments tomorrow along with the doxy,
   and implementation of Examine depending on what we want

| December 7th 2024 - Mac |
- Finished Npc class yesterday
- Completed main by editing both main and inside Game, other helped by explaining their parts of the code
- Wrote all of the text files that are outputted and organized the story
- wrote some tests for Npc

| December 8,9th David |
- Doxy and tests for inputpuzle, game, and player
- Helped write game
- Fixed bugs in inputpuzzle 

| December 8,9th Jonah |
- Doxy and tests for object and interact puzzle
- Helped write game.
- hopefully figured out how to add final tag before 12:30

| December 8,9th Jack |
- Make changes to the Environments and rooms
- Helped write game.
- Bug fixed
- Rewrote the UML Diagram
- Wrote what's below v
###NPCs
The NPC names are:
Mechanic
TeamPrinciple
Teammate


###Environments
The Environments are:
ContainerRoom
CarRoom
Race


###Usable Items
The useable Items are:
Key
Helmet
Gloves
SteeringWheel


###Puzzles
The Puzzles are:
Finding key
Using key to open up a Safe
Find a password and use a password
Unlock the car
Start the Car
Equation Puzzle
Riddle Puzzle
MultipleChoice Puzzle


###How to lose the game
The player lose the game by:
Putting in the wrong input makes max verstapin sabtage your car making you lose
Failing Equation puzzle
Failing Riddle Puzzle
Failing Multiple Choice puzzle
Running over turbo


###Player action
The player can do the following actions:
Look around the Room
Go to cupboard
Sit on a couch
Leave the room
Go to a safe
Talk to mechanic
Talk to Team Principal
Talk to teammate
Go to Car
Start the Car
Unlock the Car


Notes:

* The Makefile and .gitlab-ci.yml files are set up to run on Ubuntu.
* The .gitlab-ci.yml file uses the targets in the Makefile.
* These are the tools/commands/apps used:
  * Compiler: g++
  * Style Check: cpplint
  * Static Check: cppcheck
  * Coverage Check: gcov/lcov
  * Memory Check: valgrind
  * Unit Test: gtest 
  * Documentation: doxygen
* See the version report on the pipeline.

Certain assumptions have been made:
* One repo contains the files for one project.
* All unit testing files are found in <code>test/</code> including <code>main.cpp</code>.
* All header files for the project are found in <code>include/</code> and named <code>*.hpp</code>, every class must have a header file.
* All project source files for the project are named <code>*.cpp</code>.
  * Any needed source files that correspond to header files are found in <code>src/</code>.
  * There is a <code>main.cpp</code> found in <code>src/project/</code>.
