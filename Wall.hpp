#ifndef WALL_HPP
#define WALL_HPP

#include "Line.hpp"

class Wall {
public:
  Wall(Point P, Point Q, bool is_border = false);
  Wall(Line L, bool is_border = false);
  void setLine(Line L);
  void setLine(Point P, Point Q);
  Line getLine();

private:
  Line line;
  bool is_border;
};

#endif