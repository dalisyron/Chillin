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
private:
  double height;
  double width;
};

#endif