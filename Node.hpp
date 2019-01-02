#ifndef NODE_HPP
#define NODE_HPP

#include "Point.hpp"
#include <vector>
#include <iostream>

class Node {
public:
	Node(Point pos);
  Node();
	Point getPosition();
	void setPosition(Point pos);
	std::vector <Node*> adjacencyList;
  Node *Parent;
private:
  Point pos;
  std::string type;
};

#endif