#ifndef PLAYER_H_
#define PLAYER_H_
#include "GameBoard.h"

class Player{


	private:
		int* expBar;
		int* health;
	protected:	
	public:
		Player();
		~Player();
		void initExpBar(int init_size);
		void updateExp();
		void levelUp();
		void attack();
		void updateHealth;
		void isDead();


		
};







#endif //PLAYER_H_
