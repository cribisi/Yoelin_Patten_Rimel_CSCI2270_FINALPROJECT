#include "GameBoard.h"
#include "Player.h"

#include <iostream>

using namespace std;

int main()
{
    int choice;
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
	
	
    cout << "\033[2J\033[1;1H";
    cout<<endl;
    cout<<"You are in the first room. Would you like to travel left or right?"<<endl;
    cout<<endl;
    cout<<"Enter 1 for left or 2 for right"<<endl;
    cout<<"You can exit by pressing any other key"<<endl;
    cin>>choice;



    while(choice == 1 || choice == 2){

        if(choice == 1){
            cout<<endl;
            cout<<"You chose to go left"<<endl;
        }
        else{
            cout<<endl;
            cout<<"You chose to go right"<<endl;
        }
    cout<<"Enter 1 for left or 2 for right"<<endl;
    cin>>choice;
    }

    cout<<"Thank you for playing! Goodbye!"<<endl;
	
}

