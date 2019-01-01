#include "Wall.hpp"

//asdfjk

Wall::Wall(Point P, Point Q, bool is_border) {
  setLine(P, Q);
  this -> is_border = is_border;
} 

Wall::Wall(Line L, bool is_border) {
  setLine(L);
  this -> is_border = is_border;
}

void Wall::setLine(Line L) {
  this -> line = L;
}

void Wall::setLine(Point P, Point Q) {
  this -> line = Line(P, Q);
}

Line Wall::getLine() {
  return this -> line;
}