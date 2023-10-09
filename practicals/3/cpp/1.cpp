#include <iostream>
#include <cmath>
using namespace std;


// Square
int area(int x) {return x*x;}
// Circle
int area(float x) {return M_PI*x*x;}
// Rectangle
int area(int b, int h) {return b*h;}
// Triangle
float area(float b, float h) {return 0.5*b*h;}



int main() {
    int   x,b,h;
    float bf,hf;
    
    // Square
    x = 6;
    cout << "Area of a square with a side of " << x << " units is " << area(x) << " sq. units" << endl;
    // Circle
    cout << "Area of a circle with a radius of " << x << " units is " << area(x) << " sq. units" << endl;
    // Rectangle
    b=2; h=3;
    cout << "Area of a rectangle with base with base " << b << " units and height " << h << " units is " << area(b,h) << "sq. units" << endl;
    // Triangle
    bf=7.4; hf=3.9;
    cout << "Area of a triangle with base " << bf << " units and height " << hf << " units is " << area(bf,hf) << "sq. units" << endl;
    
    return 0;
}