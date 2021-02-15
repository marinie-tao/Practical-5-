#include <iostream>
#include "Point.hpp"
#include "Circle.hpp"
using namespace std; 

int main() 
{
  Point p1 (7,4);
  p1.display();
  Point p2 (4,5);
  p2.display ();
  p2.distance (p1);

  Circle c1 (2,4,5);
  c1.inside (4,5);

}