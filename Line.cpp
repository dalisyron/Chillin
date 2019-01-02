#include "Line.hpp"
#include <algorithm>

bool onSegment(Point p, Point q, Point r) 
{ 
  if (q.X() <= std::max(p.X(), r.X()) && q.X() >= std::min(p.X(), r.X()) && 
    q.Y() <= std::max(p.Y(), r.Y()) && q.Y() >= std::min(p.Y(), r.Y())) 
  return true; 

  return false; 
} 

int orientation(Point p, Point q, Point r) 
{ 
  int val = (q.Y() - p.Y()) * (r.X() - q.X()) - 
      (q.X() - p.X()) * (r.Y() - q.Y()); 

  if (val == 0) return 0; 

  return (val > 0)? 1: 2;
} 

bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{ 
  int o1 = orientation(p1, q1, p2); 
  int o2 = orientation(p1, q1, q2); 
  int o3 = orientation(p2, q2, p1); 
  int o4 = orientation(p2, q2, q1); 
  if (o1 != o2 && o3 != o4) 
    return true; 
  if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
  if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
  if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
  if (o4 == 0 && onSegment(p2, q1, q2)) return true; 
  return false;
}

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