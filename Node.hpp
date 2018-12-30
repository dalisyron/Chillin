#include "Point.hpp"
#include <vector>

class Node {
public:
	Node(Point pos);
	Point getPosition();
	void setPosition(Point pos);
	std::vector <Node*> adjacencyList;
private:
	Point pos;
};