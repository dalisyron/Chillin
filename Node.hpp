#include "Point.hpp"
#include <vector>
#include <iostream>

struct WallNode {
  std::string getType();
};

struct MedicNode {
  std::string getType();
};

struct PowerNode {
  std::string getType();
};

class Node {
public:
  template<typename NodeTag>
	Node(Point pos);
	Point getPosition();
	void setPosition(Point pos);
	std::vector <Node*> adjacencyList;
private:
	Point pos;
};
