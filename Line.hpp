#ifndef LINE_HPP
#define LINE_HPP

#include "Point.hpp"

class Line {
public:
  Line(Point P, Point Q);
  Line();
  void setStart(Point P);
  void setEnd(Point Q);
  Point getStart();
  Point getEnd();
private:
  Point start_point;
  Point end_point;
};

#endif