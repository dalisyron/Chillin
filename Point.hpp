#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
	Point(double x, double y);
	Point();
  
  double X();
  double Y();
  void setX(double x);
  void setY(double y);
  double getDistance(Point &P);
private:
	double x;
	double y;
};

#endif
