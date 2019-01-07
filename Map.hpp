#ifndef MAP_HPP
#define MAP_HPP

#include "Wall.hpp"
#include <vector>

class Map {
public:
  Map(double height, double width, std::vector<Wall> walls);
  Map();
  double Height();
  double Width();
  void setHeight(double height);
  void setWidth(double width);
  std::vector <Wall> Walls;
  bool Intersect(Point P, Point Q);
  bool Intersect(Line L);
  bool Cross(Point P, Point Q);
  bool Cross(Line L);
  
private:
  double height;
  double width;
};

#endif