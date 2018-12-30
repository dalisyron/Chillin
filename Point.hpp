#include "vector"

class Point {
public:
	Point(double x, double y);
	double X();
	double Y();
	void setX(double x);
	void setY(double y);
	double getDistance(Point &P);
	Point();
	std::vector <Point*> adj;
private:
	double x;
	double y;
};