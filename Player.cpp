#include "Player.h"
#include <iostream>


using namespace std;

Player::Player(int input_health, node* input_start){
	health=input_health;
	current = input_start;
};
	
Player::~Player(){
	delete [] expBar;
};

void Player::initExpBar(int init_size){
	expBar = new int[init_size];
	currentExp = &expBar[0];
	expLength = init_size;
};

void Player::levelUp(){
	
	expLength = 2*expLength;

	delete expBar;

	expBar = new int[expLength];
	currentExp = &expBar[0];	
};


void Player::updateExp(int exp){

		

	for(int i = 0; i < exp; +i){
		++currentExp;
		if(currentExp == &expBar[expLength]){
			levelUp();
		}	
	}
	
};


