#include "Line.hpp"
#include "Node.hpp"
#include "Wall.hpp"
#include "Map.hpp"
#include "Grid.hpp"

#include <iostream>

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
}F;

int main() {
  F.mapTest();
  Point P(10, 10);
	Point Q(20, 15);
  Line L(P, Q);
  Wall W(L, false);
  Point start_point = W.getLine().getStart();
  Point end_point = W.getLine().getEnd();
  cout << start_point.X() << " " << start_point.Y() << endl;
  cout << end_point.X() << " " << end_point.Y();
  
}