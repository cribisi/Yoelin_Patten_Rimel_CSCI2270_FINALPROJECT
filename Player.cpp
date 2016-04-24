#include "Player.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       

using namespace std;

Player::Player(int input_health, Node* input_start){
	health=input_health;
	current = input_start;
	setLevel(0);//SHOULD BE 0
	initExpBar(2);
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
	int newLevel = getLevel()+1;
	setLevel(newLevel);
	cout << "LEVELED UP!!! " << endl;
};


void Player::updateExp(int exp){	

	//cout << "length of expBar = " << expLength << endl;//DEBUG PURPOSES
	currentExp++;
	if(currentExp == &expBar[expLength]){
		levelUp();
	}	
	
	
};


int Player::getLevel(){
	
	return level;

};

void Player::setLevel(int i){

	level = i;
};


int Player::attack(){

	srand (time(NULL));

	int damageMult = rand()%9 + 1;

	return level*damageMult;


};


int Player::defend(){


	return level*3;


};

bool Player::hasAllCrystals(){

	bool rtnValue = true;
	for( int i = 0; i < 4 ; ++i){
		
		if(crystals[i] == false){
		
			rtnValue = false;
		}
	}

	return rtnValue;

};
