# Yoelin_Patten_Rimel_CSCI2270_FINALPROJECT
# William John Van Patten
# Bryan Yoelin
# David Rimel

@@@@@@@@@IMPORTANT NOTE@@@@@@@@@@@@@@@@@@@@@@@IMPORTANT NOTE@@@@@@@@@@@@@@@@@@@@@@@IMPORTANT NOTE@@@@@@@@@@@@@@@@@@@@@@@IMPORTANT NOTE@@@@@@@@@@@@@@
-This program has problems running in code blocks or any other IDE. Please make in the terminal and also run in the terminal (instrucitons below)
-If you want to use IDE make sure it is compiling using our make file
-Use the map.jpg file to quickly traverse through the gameboard for debugging purposes. Ideally the player would not have this. 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


----------------
Project Summary:
----------------

For our CSCI2270 project, we will be building a text based dungeon
 crawler in which the user will choose their own path to traverse 
through the map. The game will also include an item inventory (to boost the stats of the user),
 an experienced-based leveling system and of course a final boss. A binary tree will be used as the
 game board and dynamic arrays will be used to represent the player’s experience. The program uses array doubling to
level the player up. The game board will pre-defined.  At any given time the player will be
 located at a node in the game board. At each node, the player will be posed with three movement choices
 corresponding to the two nodes under the player’s current node (analogous to choosing between three doors).
 The user must collect certain items throughout the map in order to fight the boss; the boss will be set to
 the nodes at the bottom of each branch such that the player must fight the final boss in order to win the 
game. Once the boss fight is initiated, the player will receive a number of “dice rolls” (a random number), 
which will correspond to damage dealt to the boss. The higher the player's experience,the more damage the player
 will do to the boss. Good luck!


----------------------------
How To Compile:(in terminal)

$ make

How To Run: (in terminal)

./DungeonsOfTheCursed_EXE

----------------------------


------------
Dependencies
------------

No external dependencies required. Only standard C++ dependencies used.


--------------------
System Requirements
--------------------

none, can work on any Operating System
 
----------------
Open issues/bugs
----------------

No known issues or bugs




