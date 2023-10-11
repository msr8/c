#include <iostream>
using namespace std;
class second;


class first {
    int data;
public:
    first(int x) {data=x;}
    void display(second s); // Defining this later because second is "incomplete class"
    friend class second;
};

class second {
    int data;
public:
    second(int x) {data=x;}
    void display(first f) {
        cout << "first class data member from inside the second class: " << f.data << endl;
    };
    friend class first;
};

void first::display(second s) {
    cout << "second class data member from inside the first class: " << s.data << endl;
};



int main() {
    first f(10);
    second s(20);
    f.display(s);
    s.display(f);
    return 0;
}
