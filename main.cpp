#include "Line.hpp"
#include "Node.hpp"
#include <iostream>

using namespace std;

int main() {
  Point P(10, 10);
  Node v(P);
	Point Q(20, 20);
  Line L(P, Q);
  Point st = L.getStart();
  Point en = L.getEnd();
  cout << st.X() << " " << st.Y() << endl;
  cout << en.X() << " " << en.Y();
}