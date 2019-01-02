#include "Map.hpp"

Map::Map(double height, double width , std::vector<Wall> walls) {
  setHeight(height);
  setWidth(width);
  this -> Walls = walls;
}

Map::Map() {
  //pass
}

double Map::Height() {
  return this -> height;
}

double Map::Width() {
  return this -> width;
}

void Map::setHeight(double height) {
  this -> height = height;
}

void Map::setWidth(double width) {
  this -> width = width;
}