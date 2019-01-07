#ifndef LINE_HPP
#define LINE_HPP

#include "Point.hpp"

class Line {
public:
  Line(double Px, double Py, double Qx, double Qy);
  Line(Point P, Point Q);
  Line();
  void setStart(Point P);
  void setEnd(Point Q);
  Point getStart();
  Point getEnd();
  bool Intersect(Point P, Point Q);
  bool Intersect(Line L);
  bool Cross(Point P, Point Q);
  bool Cross(Line L);

private:
  Point start_point;
  Point end_point;
};

#endif