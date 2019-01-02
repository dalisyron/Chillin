#include "Line.hpp"
#include "Node.hpp"
#include "Wall.hpp"
#include <iostream>

using namespace std;

int main() {
  Point P(10, 10);
	Point Q(20, 15);
  Line L(P, Q);
  Wall W(L, false);
  Point start_point = W.getLine().getStart();
  Point end_point = W.getLine().getEnd();
  cout << start_point.X() << " " << start_point.Y() << endl;
  cout << end_point.X() << " " << end_point.Y();
  
}