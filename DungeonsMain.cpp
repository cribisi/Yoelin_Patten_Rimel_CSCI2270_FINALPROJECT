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

    startMenu(input);

    cout << " input =  " << input;

	
    if(input == "START"){

	    while(true){
	    	
	//	cout << "hey" << endl;
	    	game.traverse();
	    
	    }

	game.bossEncounter();    
    
    
    }

    cout<<"Thank you for playing! Goodbye!"<<endl;

}

