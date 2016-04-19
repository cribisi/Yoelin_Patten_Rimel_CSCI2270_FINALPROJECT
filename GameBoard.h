#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include "Player.h"

class GameBoard{

	struct node{
		int nodeID;
		bool visited;
		int exp;
		node* left;
		node* right;
		node* parent;

		node(int node_id){
			visited = false;
			exp = 1;
			left = NULL;
			right = NULL;
			parent = NULL;
			nodeID = node_id;
		}
	}

	private:
		node* head;
		int nodeCount;
	protected:	
	public:
		GameBoard(int num_nodes);
		~GameBoard();
		void traverse(int i);
		bool isLeaf(node*);
		void bossEncounter(int bossHealth,Player* p);
		void randDungeonInitalization(int dungeonLenght, int maxID_Size);
		

};







#endif //GAMEBOARD_H_
