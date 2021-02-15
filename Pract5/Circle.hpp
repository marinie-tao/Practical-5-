#include <iostream>
#include <cmath>
using namespace std; 


class Circle : public Point // call the base/parent class to inherit of x_coord and y_coord 
{
  private: 
  double radius; 
  const double pi = 3.14; 
  double x_coord; //  point x co-ordinate  declaration 
  double y_coord; //  point y co-ordinate declaraiotn 
  public: 
  Circle (double x, double y, double r): radius {r}, x_coord{x}, y_coord{y} {}
// x_coord and y_coord are derived class constructor has to be called and initialized here (overriding them in Circle) -->  call constructor of parent class passing x_coord and y_coord 
  void display () 
  {
    cout << "Center coordinates is: " << x_coord << ";" << y_coord << endl; 
  }

  void circumference ()
  {
    cout << 2* pi * radius << endl; 
  }

  void area ()
  {
    cout << 2 *pi * radius << endl;
  }

  void inside (double x, double y)
  {
    double a,b, is_inside; 
    a = x_coord - x; 
    b = y_coord -y; 
    is_inside = sqrt(pow(a,2)+ pow(b,2)); 
    if (is_inside > radius) 
    {
      cout << "Point is not inside the circle";
    }
    else 
    {
      cout << "Inside" << endl; 
    }  
  }
};