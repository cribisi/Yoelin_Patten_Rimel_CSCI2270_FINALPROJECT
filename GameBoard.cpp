#include "GameBoard.h"
#include <iostream>

using namespace std;

GameBoard::GameBoard(int num_nodes){
	this->nodeCount = num_nodes;
};

GameBoard::~GameBoard(){};

void GameBoard::explicitInitialization()
{
    node *Mountains;
    node *Cave;
    node *Dungeon;
    node *LavaPools;
    node *SilverCrystalRequired;
    node *RedCrystalRoom;
    node *Library;
    node *Book1;
    node *Book2;
    node *EmeraldMine;
    node *GreenCrystalRoom;
    node *ClimbMountain1;
    node *ClimbMountain2;
    node *ClimbMountain3;
    node *SilverCrystalRoom;
    node *Lake;
    node *BlueCrystalRoom;

    Mountains->parent=head;
    Mountains->left=Cave;
    Mountains->right=EmeraldMine;

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

    Lake->parent=head;
    Lake->left=NULL;
    Lake->right=BlueCrystalRoom;
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


