#ifndef UTILS_HPP
#define UTILS_HPP

#include "Point.hpp"
#include <algorithm>

bool onSegCheck(Point &p, Point &q, Point &r);
int orientation(Point &p, Point &q, Point &r);

bool doIntersect(Point &p1, Point &q1, Point &p2, Point &q2);

double getEquationDistance(Point &Z /*point*/, Point &P /*line_start*/, Point &Q /*line_end*/);
bool onSegment(Point &Z /*point*/, Point &P /*line_start*/, Point &Q /*line_end*/);

bool doCross(Point &p1, Point &q1, Point &p2, Point &q2);

bool doubleEqual(double a, double b, double EPSILON = 0.0000001);

bool doubleLessEqual(double a, double b, double EPSILON = 0.0000001);

bool doubleGreaterEqual(double a, double b, double EPSILON = 0.0000001);

bool doubleStrictlyLess(double a, double b, double EPSILON = 0.0000001);

bool doubleStrictlyGreater(double a, double b, double EPSILON = 0.0000001);

#endif