#include "Line.hpp"
#include "Node.hpp"
#include "Wall.hpp"
#include "Map.hpp"
#include "Grid.hpp"

#include <iostream>
#include "Utils.hpp"

using namespace std;

class Tester {
public:
  vector <Point> testPoints;
  vector <Line> testLines;
  vector <Wall> testWalls;
  Map testMap;

  void resetTest() {
  }

  bool mapTest() {
    for (int i = 0; i < 10; i++) {
      Point tmp(i, i);
      testPoints.push_back(tmp);
    }
    cout << testPoints.size() << endl;

    for (int i = 0; i < testPoints.size(); i++) {
      for (int j = i + 1; j < testPoints.size(); j++) {
        Line tmp(testPoints[i], testPoints[j]);
        testLines.push_back(tmp);
      }
    }
    cout << testLines.size() << endl;

    for (int i = 0; i < testLines.size(); i++) {
      Wall tmp(testLines[i]);
      testWalls.push_back(tmp);
    }

    cout << testWalls.size() << endl;

    testMap = Map(100.0, 100.0, testWalls);
    Point P = testMap.Walls[0].getLine().getStart();
    cout << P.X() << " " << P.Y() << endl;
    P = testMap.Walls[0].getLine().getEnd();
    cout << P.X() << " " << P.Y() << endl;
    Grid G(testMap);
    P = G.getMap().Walls[0].getLine().getStart();
    cout << P.X() << " " << P.Y() << endl;
    P = G.getMap().Walls[0].getLine().getEnd();
    cout << P.X() << " " << P.Y() << endl;
    
    Point t1(0, 2);
    Point t2(0, 1);
    cout << testMap.Intersect(t1, t2) << endl;
    return true;
  }

  bool LineIntersectTest() {
    Point p1(1, 2), q1(1, 0);
    Point p2(0, 1), q2(2, 1);
    cout << "inter stat : " << doIntersect(p1, q1, p2, q2) << endl;
    cout << "cross stat : " << doCross(p1, q1, p2, q2) << endl;
    p1 = Point(0, 2);
    q1 = Point(0, 0);
    p2 = Point(0, -1);
    q2 = Point(0, 1);
    cout << "inter stat : " << doIntersect(p1, q1, p2, q2) << endl;
    cout << "cross stat : " << doCross(p1, q1, p2, q2) << endl;
    p1 = Point(0, 0);
    q1 = Point(3, 3);
    p2 = Point(0, 3);
    q2 = Point(3, 0);
    Line L3(p1, q1);
    cout << "line_cross_test : " << L3.Cross(p2, q2) << endl;  
    cout << "line_intersect_test : " << L3.Intersect(p2, q2) << endl;  
    p1 = Point(0, 0);
    q1 = Point(3, 3);
    p2 = Point(0, 3);
    q2 = Point(1.5, 1.5);
    L3 = Line(p1, q1);
    cout << "line_cross_test : " << L3.Cross(p2, q2) << endl;  
    cout << "line_intersect_test : " << L3.Intersect(p2, q2) << endl;  
    
  }
}F;

int main() {
  //F.mapTest();
  F.LineIntersectTest();
  Point P(10, 10);
	Point Q(20, 15);
  Line L(P, Q);
  Wall W(L, false);
  
}