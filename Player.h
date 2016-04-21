#ifndef PLAYER_H_
#define PLAYER_H_

class Player{

//added a node pointer

	private:
		int* expBar;
		int* health;
		node* current;
	protected:	
	public:
		Player();
		~Player();
		void initExpBar(int init_size);
		void updateExp(GameBoard* board);
		void levelUp();
		void attack();
		void updateHealth();
		void isDead();


		
};







#endif //PLAYER_H_
