#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <string>

class Node{

	public:
		Node();
		~Node();
		bool visited;
		int exp;
		std::string treasure;
		std::string nodeName;
		std::string description;
		Node* left;
		Node* right;
		Node* parent;



};


#endif //GAMEBOARD_H_
