#include "Grid.hpp"

Grid::Grid(Map map) {
  setMap(map);
}

Grid::Grid() {
  //pass
}

void Grid::setMap(Map map) {
  this -> map = map;
}

Map Grid::getMap() {
  return this -> map;
}
