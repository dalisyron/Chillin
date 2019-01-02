#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include "Map.hpp"
#include "Node.hpp"

class Grid {
public:
  Grid(Map map);
  Grid();
  std::vector <Node> nodes;
  Map getMap();
  void setMap(Map map);

private:
  Map map;  
};

#endif