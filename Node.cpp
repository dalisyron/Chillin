#include "Node.hpp"

struct WallNode {

};

struct MedicNode {

};

struct PowerNode {

};

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