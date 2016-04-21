#include "Node.h"
#include <iostream>

using namespace std;


Node::Node(){
	visited = false;
	exp = 1;
	left = NULL; //Changing all nullptr's to 0's so I can compile// changed to NULL should work
	right = NULL;
	parent = NULL;
};

Node::~Node(){};
