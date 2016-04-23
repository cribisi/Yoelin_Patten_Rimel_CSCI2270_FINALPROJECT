#include "GameBoard.h"
#include "Player.h"
#include "Node.h"


#include <iostream>

using namespace std;

//Making the game board



int main()
{

	GameBoard game;

    string choice;
    string start;
    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<"Welcome to the dungeon of the cursed"<<endl;
    cout<<endl;
    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<"Navigate through the dungeon to collect experience"<<endl;
    cout<<endl;
    cout<<"Please type START to start the game"<<endl;
    cout<<endl;
    cin>>start;

    while(start != "START" && start != "start"){
		cout<<"Command not valid"<<endl;
		cout<<"Type START to begin"<<endl;
		cin>>start;
	}

	while(game.player->health!=0){
		game.traverse();
	}



    cout<<"Thank you for playing! Goodbye!"<<endl;

}

