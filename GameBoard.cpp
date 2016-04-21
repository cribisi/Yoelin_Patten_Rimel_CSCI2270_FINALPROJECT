#include "GameBoard.h"
#include <iostream>

using namespace std;

GameBoard::GameBoard(int num_nodes){
	this->nodeCount = num_nodes;
};

GameBoard::~GameBoard(){};

void GameBoard::explicitInitialization()
{

    //need to allocate this on the heap		
    node *Mountains = new node;
    node *Cave = new node;
    node *Dungeon = new node;
    node *LavaPools = new node;
    node *SilverCrystalRequired = new node;
    node *RedCrystalRoom = new node;
    node *Library = new node;
    node *Book1 = new node;
    node *Book2 = new node;
    node *EmeraldMine = new node;
    node *GreenCrystalRoom = new node;
    node *ClimbMountain1 = new node;
    node *ClimbMountain2 = new node;
    node *ClimbMountain3 = new node;
    node *SilverCrystalRoom = new node;
    node *Lake = new node;
    node *BlueCrystalRoom = new node;
    node *start = new node;
	
    
    head = start;
    start->nodeName = "village";
    start->description = "welcome to the mysterious village you have two doors to choose from ... procede with caution!";
    start->treasure = "None";
    start->parent = NULL;
    start->left = Mountains;
    start->right  = Lake;

    Mountains->nodeName = "Mountiains";
    Mountains->description = "you have climbed the trechorous Mountains where shall you go now?...... ";
    Mountains->treasure = "None";    
    Mountains->parent=head;
    Mountains->left=Cave;
    Mountains->right=EmeraldMine;

    Lake->parent=head;
    Lake->left=NULL;
    Lake->right=BlueCrystalRoom;

    Cave->parent=Mountains;
    Cave->left=Dungeon;
    Cave->right=EmeraldMine;

    Dungeon->parent=Cave;
    Dungeon->left=LavaPools;
    Dungeon->right=Library;

    LavaPools->parent=Dungeon;
    LavaPools->left=NULL;
    LavaPools->right=SilverCrystalRequired;

    SilverCrystalRequired->parent=LavaPools;
    SilverCrystalRequired->left=NULL;
    SilverCrystalRequired->right=RedCrystalRoom;

    RedCrystalRoom->parent=SilverCrystalRequired;
    RedCrystalRoom->left=NULL;
    RedCrystalRoom->right=NULL;

    Library->parent=Dungeon;
    Library->left=Book1;
    Library->left=Book2;

    EmeraldMine->parent=Cave;
    EmeraldMine->left=NULL;
    EmeraldMine->right=GreenCrystalRoom;

    ClimbMountain1->parent=Mountains;
    ClimbMountain1->left=NULL;
    ClimbMountain1->right=ClimbMountain2;

    ClimbMountain2->parent=ClimbMountain1;
    ClimbMountain2->left=NULL;
    ClimbMountain2->right=ClimbMountain3;

    ClimbMountain3->parent=ClimbMountain2;
    ClimbMountain3->left=NULL;
    ClimbMountain3->right=NULL;

   }



//A function that John Van Patten made, will possibly be used in the future to search for nodes in the game board
/*void GameBoard::createNode(node startNode,std::string nameS, std::string parentS, std::string LOR) //This function allows the programmer to create custom gameboards
{
     node *temp;
     temp=startNode;

    if(temp->left->name!=parentS)
    {
        createNode(temp->left,nameS,parentS,LOR)
    }
    if(temp->left->name==parentS)
    {
        temp=temp->left;
        node *addNode=new node;
        addNode->nodeName=nameS;
        if(LOR=="L")
        {
            temp->left=addNode;
        }
        else
        {

        }
    }
    if(temp->right->name!=parentS)
    {
        createNode(temp->right,nameS,parentS,LOR)
    }
    if(temp->right->name==parentS)
    {
        temp=temp->right;
        if(LOR=="L")
        {

        }
        else
        {

        }
    }


 }*/


