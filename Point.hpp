#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
	Point(double x, double y);
	double X();
	double Y();
	void setX(double x);
	void setY(double y);
	double getDistance(Point &P);
	Point();
private:
	double x;
	double y;
};

#endif
