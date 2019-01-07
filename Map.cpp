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

bool Map::Intersect(Point P, Point Q) {
  for (Wall w : this -> Walls) {
    if (w.getLine().Intersect(P, Q)) {
      return true;
    }
  }
  return false;
}

bool Map::Intersect(Line L) {
  Point P = L.getStart();
  Point Q = L.getEnd();
  for (Wall w : this -> Walls) {
    if (w.getLine().Intersect(P, Q)) {
      return true;
    }
  }
  return false;
}

bool Map::Cross(Point P, Point Q) {
  for (Wall w : this -> Walls) {
    if (w.getLine().Cross(P, Q)) {
      return true;
    }
  }
  return false;
}

bool Map::Cross(Line L) {
  Point P = L.getStart();
  Point Q = L.getEnd();
  for (Wall w : this -> Walls) {
    if (w.getLine().Cross(P, Q)) {
      return true;
    }
  }
  return false;
}