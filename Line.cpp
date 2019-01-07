#include "Line.hpp"
#include <algorithm>
#include "Utils.hpp"

Line::Line(Point P, Point Q) {
  setStart(P);
  setEnd(Q);
}

Line::Line(double Px, double Py, double Qx, double Qy) {
  Point P(Px, Py);
  Point Q(Qx, Qy);
  setStart(P);
  setEnd(Q);
}

Line::Line() {
  //pass
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

bool Line::Intersect(Point P, Point Q) {
  return doIntersect(this -> start_point, this -> end_point, P, Q);
}

bool Line::Intersect(Line L) {
  return doIntersect(this -> start_point, this -> end_point, L.start_point, L.end_point);
}

bool Line::Cross(Point P, Point Q) {
  return doCross(this -> start_point, this -> end_point, P, Q);
}

bool Line::Cross(Line L) {
  return doCross(this -> start_point, this -> end_point, L.start_point, L.end_point);
}