#include "Line.hpp"

Line::Line(Point P, Point Q) {
  setStart(P);
  setEnd(Q);
}

void Line::setStart(Point P) {
  this -> start_point = P;
}

void Line::setEnd(Point Q) {
  this -> end_point = Q;
}

Point Line::getStart() {
  return this -> start_point;
}

Point Line::getEnd() {
  return this -> end_point;
}