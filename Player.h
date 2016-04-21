#ifndef PLAYER_H_
#define PLAYER_H_
#include "Node.h"
#include <iostream>


class Player{

//added a node pointer

	private:
		int level;
		int* expBar;
		int* currentExp;
		int expLength;

	protected:
	public:
		Player(int health, Node* head);//DONE
		~Player();//DONE
		int getLevel();//DONE
		void setLevel(int i);//DONE
		void initExpBar(int init_size);//DONE
		void updateExp(int exp);//DONE
		void levelUp();//DONE
		int  attack();
		int  defend();
		void updateHealth();
		void isDead();
		Node* current;
        	int health;




};







#endif //PLAYER_H_
