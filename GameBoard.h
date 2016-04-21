#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include "Player.h"
#include "Node.h"
#include <string>


/**
 * This is our game board for DungoenOfTheCursed it is essientally a BST merged with
 * some game functions. This will be our Unvierse class that will conatin all
 * pertaining to the state of the game, ie experiment points, rooms, boss encounters,...
 * The game will take a parameter that is nodeCount in its initialization function this
 * will creat an array of random values % nodeCount which will then create a BST tree
 * based on these values. the player starts at head and can traverse the tree.
 * if a leaf is reached we fight the boss in the function bossEncounter.
 */
class GameBoard{


	private:

		//head of our BST tree
		Node* head;

		//This is the number of nodes in our BST
		int nodeCount;
		
		//This will hold all of the player info
		Player* player;

	protected:

	public:

		/* @brief constructor just takes in an int num_nodes and sets that as
		 * the private nodeCount parameter, which sets how many nodes in
		 * the dungeon.
		 * @param int num_nodes
		 */
		GameBoard(int num_nodes);

		/*
		 * @brief deconstructor
		 */
		~GameBoard();

		/*
		 * @brief gets input and depending on the input either traverse BST left,
		 * right, or to the current node's parent.
		 * @param int i
		 */


        //A function that John Van Patten made, will possibly be used in the future to search for nodes in the game board
        //void createNode(node startNode,std::string nameS, std::string parentS, std::string LOR)//This function allows the programmer to create custom gameboards

            /*Whenever the programmer uses this function he should always make the head the start node. nameS is the string that names the node.
            parentS is the desired parent. LOR is either L or R for what child the new node is
            */



		void traverse();

		/*
		 * @brief input nodes and checks if it is a leaf if so return true
		 * @param node*
		 * @return bool
		 */
		bool isLeaf(Node*);

		/*
		 * @brief the boss encounter will take in player and boss health and
		 * simulate the final boss battle based on random generated numbers
		 * and players level to calucate how much damage you do
		 * @param int bossHealth
		 * @param Player p
		 */
		void bossEncounter(int bossHealth, Player p );

		/*
		 * @brief creates the dungoean based on simple BST initialization
		 * but the nodes are random numbers between 0 and nodeCount.
		 * @param int dungeonLength
		 * @param int maxID_Size
		 */
		//void randDungeonInitalization(int dungeonLength, int maxID_Size);
		

		void explicitInitialization();


};







#endif //GAMEBOARD_H_
