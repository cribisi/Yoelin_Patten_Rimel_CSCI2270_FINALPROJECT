#include "GameBoard.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

GameBoard::GameBoard(){
	explicitInitialization();
	player = new Player(100,head);


};

GameBoard::~GameBoard(){

	delete player;

};

void GameBoard::explicitInitialization()
{

    //need to allocate this on the heap
    Node *Mountains = new Node; //defined
    Node *Cave = new Node; //defined
    Node *Dungeon = new Node; //defined
    Node *LavaPools = new Node; //defined
    Node *SilverCrystalRequired = new Node; //defined
    Node *RedCrystalRoom = new Node; //defined
    Node *Library = new Node; //defined
    Node *Book1 = new Node; //defined
    Node *Book2 = new Node; //defined
    Node *EmeraldMine = new Node; //defined
    Node *GreenCrystalRoom = new Node; //defined
    Node *ClimbMountain1 = new Node; //defined
    Node *ClimbMountain2 = new Node; //defined
    Node *ClimbMountain3 = new Node; //defined
    Node *SilverCrystalRoom = new Node; //defined
    Node *Lake = new Node; //defined
    Node *BlueCrystalRoom = new Node; //defined
    Node *start = new Node; //defined


    head = start;
    start->nodeName = "village";
    start->description = "Welcome to the mysterious village! You have two doors to choose from ... proceed with caution!";
    start->treasure = "None";
    start->parent = NULL;
    start->left = Mountains;
    start->right  = Lake;

    Mountains->nodeName = "Mountains";
    Mountains->description = "You have stumbled upon an array of mountains, where will your next move be......? ";
    Mountains->treasure = "None";
    Mountains->parent=head;
    Mountains->left=Cave;
    Mountains->right=ClimbMountain1;

    Lake->nodeName = "Lake";
    Lake->description = "You have entered the Lake, hopefully you can swim!";
    Lake->treasure = "None";
    Lake->parent=head;
    Lake->left=NULL;
    Lake->right=BlueCrystalRoom;

    Cave->nodeName = "Cave";
    Cave->description = "You successfully entered the cave...where will you go next?";
    Cave->treasure = "None";
    Cave->parent=Mountains;
    Cave->left=Dungeon;
    Cave->right=EmeraldMine;

    Dungeon->nodeName = "Dungeon";
    Dungeon->description = "Welcome to the dungeon! Be careful where you make your next turn...";
    Dungeon->treasure = "None";
    Dungeon->parent=Cave;
    Dungeon->left=LavaPools;
    Dungeon->right=Library;

    LavaPools->nodeName = "Lava Pools";
    LavaPools->description = "You have now entered the lava pools. Fire resistant footwear not included";
    LavaPools->treasure = "None";
    LavaPools->parent=Dungeon;
    LavaPools->left=NULL;
    LavaPools->right=SilverCrystalRequired;

    SilverCrystalRequired->nodeName = "Diamond Pit";
    SilverCrystalRequired->description = "These diamonds cannot be mined...but you can continue on your journey!";
    SilverCrystalRequired->treasure = "None";
    SilverCrystalRequired->parent=LavaPools;
    SilverCrystalRequired->left=NULL;
    SilverCrystalRequired->right=RedCrystalRoom;

    RedCrystalRoom->nodeName = "Red Crystal Room";
    RedCrystalRoom->description = "Hmm...this room has a strange red glow...\n After hours of searching you find a red crystal...this could be useful at some point";
    RedCrystalRoom->treasure = "R";
    RedCrystalRoom->parent=SilverCrystalRequired;
    RedCrystalRoom->left=NULL;
    RedCrystalRoom->right=NULL;

    Library->nodeName = "Library";
    Library->description = "Strange...you have found a library with two books. Maybe each book has information about this strange place";
    Library->treasure = "None";
    Library->parent=Dungeon;
    Library->left=Book1;
    Library->right=Book2;

    EmeraldMine->nodeName = "Emerald Mine";
    EmeraldMine->description = "You have entered a massive Emerald Mine...shiny";
    EmeraldMine->treasure = "None";
    EmeraldMine->parent=Cave;
    EmeraldMine->left=NULL;
    EmeraldMine->right=GreenCrystalRoom;

    ClimbMountain1->nodeName = "Mountain 1";
    ClimbMountain1->description = "Well that was a trek! However there is another mountain in front of you. Will you climb this mountain too?";
    ClimbMountain1->treasure = "None";
    ClimbMountain1->parent=Mountains;
    ClimbMountain1->left=NULL;
    ClimbMountain1->right=ClimbMountain2;

    ClimbMountain2->nodeName = "Mountain 2";
    ClimbMountain2->description = "You made it over the second mountain. However, you still have one more to traverse!";
    ClimbMountain2->treasure = "None";
    ClimbMountain2->parent=ClimbMountain1;
    ClimbMountain2->left=NULL;
    ClimbMountain2->right=ClimbMountain3;

    ClimbMountain3->nodeName = "Mountain 3";
    ClimbMountain3->description = "You finally made it over the third mountain! You decide to continue on your journey";
    ClimbMountain3->treasure = "None";
    ClimbMountain3->parent=ClimbMountain2;
    ClimbMountain3->left=NULL;
    ClimbMountain3->right=SilverCrystalRoom;

    Book1->nodeName="Book 1";
    Book1->description="The book reads \"In order to face the dragon, do not allow yourself to be nullified\"";
    Book1->treasure="None";
    Book1->parent=Library;
    Book1->left=NULL;
    Book1->right=NULL;

    Book2->nodeName="Book 2";
    Book2->description="The book reads \"RGB\"";
    Book2->treasure="None";
    Book2->parent=Library;
    Book2->left=NULL;
    Book2->right=NULL;

    BlueCrystalRoom->nodeName="Blue Crystal Room";
    BlueCrystalRoom->description="This room has a strange blue tint...\nOh look! You found a blue crystal!";
    BlueCrystalRoom->treasure="B";
    BlueCrystalRoom->parent=Lake;
    BlueCrystalRoom->left=NULL;
    BlueCrystalRoom->right=NULL;

    GreenCrystalRoom->nodeName="Green Crystal Room";
    GreenCrystalRoom->description="This room has a strange green aura...\nIt must be that green crystal!";
    GreenCrystalRoom->treasure="G";
    GreenCrystalRoom->parent=EmeraldMine;
    GreenCrystalRoom->left=NULL;
    GreenCrystalRoom->right=NULL;

    SilverCrystalRoom->nodeName="Silver Crystal Room";
    SilverCrystalRoom->description="This room is really really shiny...\nShiny object! You found the silver crystal";
    SilverCrystalRoom->treasure="S";
    SilverCrystalRoom->parent=ClimbMountain3;
    SilverCrystalRoom->left=NULL;
    SilverCrystalRoom->right=NULL;

   }



 void GameBoard::traverse(){

	  string direction;

	  //update exp and pick up crystal
	  if(player->current->visited == false){
		  player->current->visited = true;
		  player->updateExp(1);

		  //UPDATE: crystal array===============
		  if(player->current->treasure == "R" ){
		  	player->crystals[0] = true;
		  }
		  else if(player->current->treasure == "G" ){
		  	player->crystals[1] = true;
		  }
		  else if(player->current->treasure == "B" ){
		  	player->crystals[2] = true;
		  }
		  else if(player->current->treasure == "S" ){
		  	player->crystals[3] = true;
		  }
		//========================================
	  }

	  up:
	  cout << "player level: " << player->getLevel() << endl;
	  cout<<"==============================="<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<< player->current->nodeName<<endl;
	  cout<<endl;
	  cout<<endl;
	  cout<<"==============================="<<endl;
	  cout<<endl;
	  cout<<player->current->description<<endl;
	  cout<<endl;
	  cout<<"Enter L for left, R for right or U for up"<<endl;
	  cin>>direction;

	  cout << endl;
	  cout << endl;



	  //Checking for correct input
	  while(direction!="L" && direction!="R" && direction!="U"){
		  cout<<"Enter L for left, R for right or U for up"<<endl;
		  cin>>direction;
	  }

	  //move left
	  if(direction == "L"){
		if(player->current->left!=NULL){
			player->current = player->current->left;
			cout << "\033[2J\033[1;1H";//clear screen

		}
		else{
			cout << "\033[2J\033[1;1H";//clear screen
			cout<<"THE LEFT(L) DOOR WAY IS LOCKED !!!!!!!!!!!"<<endl;
			goto up;
		}
	  }

	  //move right
	  else if(direction == "R"){
		  if(player->current->right!=NULL){
		  	player->current = player->current->right;
			cout << "\033[2J\033[1;1H";//clear screen

		}
		  else{
			cout << "\033[2J\033[1;1H";//clear screen
			cout<<"THE RIGHT(R) DOOR IS LOCKED !!!!!!!!!!!"<<endl;
			goto up;
		}
	  }

	  //move up
	  else if(direction == "U"){
		  if(player->current->parent != NULL){
			 player->current = player->current->parent;
			 cout << "\033[2J\033[1;1H";//clear screen

		  }
		  else{
			cout << "\033[2J\033[1;1H";//clear screen
			cout<<"THE UPPER(U) DOOR IS LOCKED !!!!!!!!!!!"<<endl;
			goto up;

		   }
	  }


 }

bool GameBoard::isLeaf(Node* node){
	 if(node->left == NULL && node->right == NULL)
		return true;
	return false;
}

bool GameBoard::playerHasWonBossEncounter() //player is the Player
{
    srand(time(NULL)); //Initializing the random seed with the current time.
	int diceRoll;
	int dragonHealth=100;
	int dragonAttack; //This variable takes in a random number (modifed with multipliers and offsets) and stores it.
	int localPlayerAttack; //This variable retrieves a value from player.attack() and stores it locally.
	int playerDefense;
	int playerDefends=3;
	string playerDChoice;
	string playerAChoice;
    cout << "\033[2J\033[1;1H";
    cout<<"==============================="<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"A dragon appears before you. Fight for your life"<<endl;
    cout<<endl;
    cout<<"Press any key to continue"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"==============================="<<endl;
    string key;
    cin>>key;

	while(player->health >= 0 && dragonHealth >= 0)
	{
		cout << "\033[2J\033[1;1H";
		cout<<"Level = "<<player->getLevel()<<endl;
		cout<<"Health = "<<player->health<<endl;
		cout<<"Boss Health = "<<dragonHealth<<endl;
	    dragonAttack=rand()%10 + 10; //Dragon's damage is from 10-19
	    cout<<"The dragon attacks and will do "<<dragonAttack<<" damage."<<endl;
        cout<<"You have "<<player->health<<" life left."<<endl;
	    cout<<"Do you want to defend (Y/N)? "<<"You have "<<playerDefends<<" left."<<endl;
	    cin>>playerDChoice;

	    if(playerDChoice=="Y" && playerDefends>0) /*Editing here to implement defense counters*/
        {
			 playerDefends--;
            playerDefense=player->defend();
            player->health=player->health-dragonAttack+playerDefense;
			cout << "\033[2J\033[1;1H";
		cout<<"Level = "<<player->getLevel()<<endl;
		cout<<"Health = "<<player->health<<endl;
		cout<<"Boss Health = "<<dragonHealth<<endl;

            cout<<"The dragon attacked and did "<<dragonAttack<<" damage, but you defended "<<playerDefense<<" damage"<<endl;
            cout<<"You have "<<player->health<<" life left."<<endl;
	    if(player->health <= 0){
	    	return false;
	    }
        }
	    else if (playerDChoice == "N" || playerDChoice=="Y" && playerDefends<=0)
        {
			player->health=player->health-dragonAttack;
			cout << "\033[2J\033[1;1H";
		cout<<"Level = "<<player->getLevel()<<endl;
		cout<<"Health = "<<player->health<<endl;
		cout<<"Boss Health = "<<dragonHealth<<endl;
            cout<<"The dragon attacked and did "<<dragonAttack<<" damage"<<endl;
            cout<<"You have "<<player->health<<" life left."<<endl;
		}
		else{
			cout << " COMMAND NOT VALID" << endl;
		}

	    cout<<"Do you want to attack (Y/N)?"<<endl;
	    cin>>playerAChoice;

	    if(playerAChoice=="Y")
        {
			localPlayerAttack=player->attack();
            dragonHealth=dragonHealth-player->attack();
			cout << "\033[2J\033[1;1H";
		cout<<"Level = "<<player->getLevel()<<endl;
		cout<<"Health = "<<player->health<<endl;
		cout<<"Boss Health = "<<dragonHealth<<endl;
            cout<<"You attacked the dragon and did "<<localPlayerAttack<<"damage."<<endl;
            cout<<"The dragon has "<<dragonHealth<<" life left."<<endl;
		}
	    if(dragonHealth<=0)
	    {
	    	return true;

	    }



}
    if(player->health<=0)
    {
        return false;
    }
    else
    {
        return false;
    }
}


