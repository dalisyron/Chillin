#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include "Map.hpp"
#include "Node.hpp"

class Graph {
public:
  Graph(Map map);
  Graph();
  std::vector <Node> nodes;
  Map getMap();
  void setMap(Map map);

private:
  Map map;  
};

#endif