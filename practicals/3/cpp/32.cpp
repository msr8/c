#include <iostream>
using namespace std;

class Container {
    int data;
public:
    Container(int data): data(data) {}
    int getData() {return data;}
};

class Box {
    Container* container;
public:
    Box(Container* container): container(container) {}
    int getData() {return container->getData();}
};


int main() {
    Container* container = new Container(5);
    Box* box = new Box(container);

    cout << box->getData() << endl;

    return 0;
}