#include "Graph.hpp"

Graph::Graph(Map map) {
  setMap(map);
}

Graph::Graph() {
  //pass
}

void Graph::setMap(Map map) {
  this -> map = map;
}

Map Graph::getMap() {
  return this -> map;
}
