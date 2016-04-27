#include "GameBoard.h"
#include "Player.h"
#include "Node.h"


#include <iostream>

using namespace std;

//Making the game board

void startMenu(string& input){

    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Welcome to the dungeon of the cursed"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Please type START to start the game"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"press any other button to quit";
    cout<<endl;
    cout<<endl;

    cin.clear();
    getline(cin,input);

}


int main()
{

    GameBoard game;
    string input;

    cout << "\033[2J\033[1;1H";//clear screen

    startMenu(input);

    cout << "\033[2J\033[1;1H";//clear screen


    if(input == "START"){

	  while(!game.player->hasAllCrystals()){//WORKING

		game.traverse();

	  }

	if(game.playerHasWonBossEncounter()){

		cout << "\033[2J\033[1;1H";//clear screen
		cout << " WON THE GAME " << endl;

	}
    	else{
		cout << "\033[2J\033[1;1H";//clear screen
		cout << " LOST THE GAME " << endl;

	}


    }

    cout<<"Thank you for playing! Goodbye!"<<endl;

}

