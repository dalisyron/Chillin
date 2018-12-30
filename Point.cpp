#include "Point.hpp"

Point::Point(double x, double y) {
	this -> x = x;
	this -> y = y;
}

Point::Point() {
	this -> x = 0;
	this -> y = 0;
}

double Point::X() {
	return this -> x;
}

double Point::Y() {
	return this -> y;
}

void Point::setX(double x) {
	this -> x = x;
}

void Point::setY(double y) {
	this -> y = y;
}

double Point::getDistance(Point &P) {
	return (P.X() - x) * (P.X() - x) + (P.Y() - y) * (P.Y() - y);
}
