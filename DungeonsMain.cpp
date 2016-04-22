#include "GameBoard.h"
#include "Player.h"


#include <iostream>

using namespace std;

//Making the game board



int main()
{
	
	int health = 100;
	Player player(health);
	
	GameBoard game(&player);
	
	
	
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

	while(player.health!=0){
		game->player.traverse();
	}

    

    cout<<"Thank you for playing! Goodbye!"<<endl;

}

