#include "Node.hpp"
#include <iostream>

template <typename NodeTag>
Node::Node(Point pos) {
	setPosition(pos);
}

void Node::setPosition(Point pos) {
	this -> pos = pos;
}

Point Node::getPosition() {
	return this -> pos;
}

std::string WallNode::getType() {
  return "WallNode";
}

std::string MedicNode::getType() {
  return "MedicNode";
}

std::string PowerNode::getType() {
  return "PowerNode";
}

