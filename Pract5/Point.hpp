// Ex. 3 Point Function - Create Point object with list initialization 

#include <iostream>
#include <cmath>
using namespace std; 

class Point
{
  protected: 
  double x_coord; // first point x co-ordinate 
  double y_coord; // first point y co-ordinate 
  public: 
  
  // default constructor with parameter 0
  Point (): x_coord{0}, y_coord{0} {}
 
  // constructor with parameter 
  Point (double x, double y): x_coord{x}, y_coord {y} {}

  void display () //Display the point function 
  {
    cout << "The Point coordinate is " << "(" << x_coord<< ";" << y_coord << ")" << endl;  
  }

  double distance (Point p2) // Display the distance of the current point p1 from a given point p2 
  {
    double a,b, dist;
    a = x_coord - p2.x_coord;
    b = y_coord - p2.y_coord;
    dist = sqrt(pow(a,2)+pow(b,2));
    cout << dist << endl;
    return dist; 
 
  }
};




