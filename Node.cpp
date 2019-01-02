#include "Node.hpp"
#include <iostream>

Node::Node(Point pos) {
	setPosition(pos);
  this -> Parent = NULL;
}

Node::Node() {
  //pass
}

void Node::setPosition(Point pos) {
	this -> pos = pos;
}

Point Node::getPosition() {
	return this -> pos;
}
