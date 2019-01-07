#include "Utils.hpp"
#include <cmath>
#include <algorithm>

//checked on geeksforgeeks judge and self made tests

bool doubleEqual(double a, double b, double EPSILON) {
	return std::fabs(a - b) < EPSILON;
}

bool doubleLessEqual(double a, double b, double EPSILON) {
	if (doubleEqual(a, b, EPSILON)) {
		return true;
	}
	return a < b;
}

bool doubleGreaterEqual(double a, double b, double EPSILON) {
	if (doubleEqual(a, b, EPSILON)) {
		return true;
	}
	return a > b;
}

bool doubleStrictlyLess(double a, double b, double EPSILON) {
	if (doubleEqual(a, b, EPSILON)) {
		return false;
	}
	return a < b;
}

bool doubleStrictlyGreater(double a, double b, double EPSILON) {
	if (doubleEqual(a, b, EPSILON)) {
		return false;
	}
	return a > b;
}

bool onSegCheck(Point &p, Point &q, Point &r) 
{ 
  return (doubleLessEqual(q.X(),std::max(p.X(), r.X()))
   && doubleGreaterEqual(q.X(),std::min(p.X(), r.X())) 
   && doubleLessEqual(q.Y(),std::max(p.Y(), r.Y()))
   && doubleGreaterEqual(q.Y(),std::min(p.Y(), r.Y())));
} 

int orientation(Point &p, Point &q, Point &r) 
{ 
  double val = (q.Y() - p.Y()) * (r.X() - q.X()) - (q.X() - p.X()) * (r.Y() - q.Y()); 

  if (doubleEqual(val, 0)) return 0; 

  return (doubleStrictlyGreater(val, 0))? 1: 2;
} 

bool doIntersect(Point &p1, Point &q1, Point &p2, Point &q2) 
{ 
  int o1 = orientation(p1, q1, p2); 
  int o2 = orientation(p1, q1, q2); 
  int o3 = orientation(p2, q2, p1); 
  int o4 = orientation(p2, q2, q1); 
  if (o1 != o2 && o3 != o4) 
    return true; 
  if (o1 == 0 && onSegCheck(p1, p2, q1)) return true; 
  if (o2 == 0 && onSegCheck(p1, q2, q1)) return true; 
  if (o3 == 0 && onSegCheck(p2, p1, q2)) return true; 
  if (o4 == 0 && onSegCheck(p2, q1, q2)) return true; 
  return false;
}

//fixed
double getEquationDistance(Point &Z /*point*/, Point &P /*line_start*/, Point &Q /*line_end*/) {
  //std::cout << "co-Y : " << (Q.X() - P.X()) << "  " << "co-x : " << (Q.Y() - P.Y()) << "  " << "rem" << P.X() * (Q.Y() - P.Y()) - P.Y() * (Q.X() - P.X()) << std::endl;
  return (Q.X() - P.X()) * (Z.Y()) - (Q.Y() - P.Y()) * (Z.X()) + P.X() * (Q.Y() - P.Y()) - P.Y() * (Q.X() - P.X());
}

bool onSegment(Point &Z /*point*/, Point &P /*line_start*/, Point &Q /*line_end*/) {
  //std::cout << "eq dist : " << getEquationDistance(Z, P, Q) << std::endl;
  return getEquationDistance(Z, P, Q) == 0;  
}

bool doCross(Point &p1, Point &q1, Point &p2, Point &q2) {
  bool flag1 = onSegment(p1, p2, q2);
  bool flag2 = onSegment(q1, p2, q2);
  bool flag3 = onSegment(p2, p1, q1);
  bool flag4 = onSegment(q2, p1, q1);
  if (flag1 || flag2 || flag3 || flag4) {
    return false;
  }
  return doIntersect(p1, q1, p2, q2);
}