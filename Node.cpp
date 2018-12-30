#include "Node.hpp"

Node::Node(Point pos) {
	setPosition(pos);
}

void Node::setPosition(Point pos) {
	this -> pos = pos;
}

Point Node::getPosition() {
	return this -> pos;
}