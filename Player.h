#ifndef PLAYER_H_
#define PLAYER_H_
#include "GameBoard.h"


class Player{

//added a node pointer

	private:
		int* expBar;
		int* currentExp;
		int health;
		int expLength;
		node* current;

	protected:	
	public:
		Player(int health, node* head);//DONE
		~Player();//DONE
		void initExpBar(int init_size);//DONE
		void updateExp(int exp);//DONE
		void levelUp();//DONE
		void attack();
		void updateHealth();
		void isDead();


		
};







#endif //PLAYER_H_
