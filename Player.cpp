#include "Player.h"
#include "GameBoard.h"
#include <iostream>


using namespace std;

Player::Player(){};

Player::~Player(){
		delete []*expBar;
};

void Player::initExpBar(int init_size){
	expBar = new int[init_size];
};

void Player::updateExp(GameBoard* board){
	
	if(
	
};


