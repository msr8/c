#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Rectangle: public Shape {
    float length, breadth;
public:
    Rectangle(float length, float breadth): length(length), breadth(breadth) {}
    float area() {return length * breadth;}
};

class Circle: public Shape {
    float radius;
public:
    Circle(float radius): radius(radius) {}
    float area() {return 3.14 * radius * radius;}
};


int main() {
    Shape* obj1 = new Rectangle(5, 3);
    Shape* obj2 = new Circle(5);

    cout << "Area of Rectangle: " << obj1->area() << endl;
    cout << "Area of Circle: " << obj2->area() << endl;

    return 0;
}