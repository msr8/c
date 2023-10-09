#include <iostream>
#include <string>
using namespace std;


class Square {
    public:
        float x;
        Square(float x) {this->x = x;}
        void area(float &area);
};

void Square::area(float &area) {area = x*x;}



int main() {
    Square s(5.0f);
    
    float area;
    s.area(area);
    cout << area;
    
    return 0;
}