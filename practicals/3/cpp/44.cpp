#include <iostream>
using namespace std;

class Shape {
    string color;
public:
    Shape(string c): color(c) {}
    string get_color() {return color;}
    virtual float area() {return -1;};
};

class Triangle : public Shape {
    float base;
    float height;
public:
    Triangle(float b, float h, string col): base(b), height(h), Shape(col) {}
    float area() {return 0.5*base*height;}
};

class Rectangle : public Shape {
    float length;
    float breadth;
public:
    Rectangle(float l, float b, string col): length(l), breadth(b), Shape(col) {}
    float area() {return length*breadth;}
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r, string col): radius(r), Shape(col) {}
    float area() {return 3.14*radius*radius;}
};


int main() {
    Triangle  t(5,2,"red");
    Rectangle r(5,2,"green");
    Circle    c(5,"blue");

    cout << "Area of triangle of color "  << t.get_color() << " is " << t.area() << " sq. units" << endl;
    cout << "Area of rectangle of color " << r.get_color() << " is " << r.area() << " sq. units" << endl;
    cout << "Area of circle of color "    << c.get_color() << " is " << c.area() << " sq. units" << endl;

    return 0;
}

