// 1.	Write a program to create a class shape with functions to find area of the shapes and display the name of the shape and other essential component of the class. Create derived classes circle, rectangle and trapezoid each having overridden functions area and display. Write a suitable program to illustrate, virtual functions, pure virtual functions and abstract class. 
#include <iostream>
using namespace std;

class Shape {
protected:
  float area;
public:
  virtual void set() = 0;
  virtual void display() {}
};

class Circle: public Shape {
  float r;
public: 
  void set() {
    cout << "Enter radius of circle: ";
    cin >> r;
  }
  void display() {
    area = 3.1416 * r * r;
    cout << "The area of circle is " << area << " square meters" << endl;
  }
};

class Rectangle: public Shape {
  float l, b;
public: 
  void set() {
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
  }
  void display() {
    area = l * b;
    cout << "The area of rectangle is " << area << " square meters" << endl;
  }
};

class Trapezoid: public Shape {
  float a, b, h;
public: 
  void set() {
    cout << "Enter a, b and h of trepezoid: ";
    cin >> a >> b >> h;
  }
  void display() {
    area = (a + b) * h / 2;
    cout << "The area of tramezoid is " << area << " square meters" << endl;
  }
};

int main() {
  Shape *ptr;

  Circle c;
  ptr = &c;
  ptr->set();
  ptr->display();

  Rectangle r;
  ptr = &r;
  ptr->set();
  ptr->display();

  Trapezoid t;
  ptr = &t;
  ptr->set();
  ptr->display();
  return 0;
}

