#include <iostream>
#include <string>
using namespace std;


class Point {
    public:           // Access specifier
        int x, y, z;  // Attributes

        // Method 1
        string toString() {
            return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
        }
};


class PointWithConstructor {
    public:
        int x, y, z;

        // Constructor
        PointWithConstructor(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        string toString() {
            return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
        }
};


int main() {
    Point p1;  // Create an object of the Point class
    p1.x = 5;
    p1.y = 1;
    p1.z = 3;

    PointWithConstructor p2(5, 1, 3);  // Create an object of the PointWithConstructor class

    cout << "The coordinates of p1 are " << p1.toString() << endl;
    cout << "The coordinates of p2 are " << p2.toString() << endl;

    return 0;
}