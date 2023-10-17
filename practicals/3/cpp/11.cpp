#include <iostream>
using namespace std;
class second;


class first {
    int data;
public:
    void take_input(second *s);
    friend class second;
};

class second {
    int data;
public:
    void show_input(first f);
    friend class first;
};


void first::take_input(second *s) { // Did *s cause else a COPY of s will be passed
    int temp_;
    cout << "Enter the value of the data member of the first class: ";
    cin >> data;
    cout << "Enter the value of the data member of the second class: ";
    cin >> s->data;
}

void second::show_input(first f) {
    cout << "Value of data member of the first class:  " << f.data << endl;
    cout << "Value of data member of the second class: " <<  data << endl;
}




int main() {
    first f;
    second s;
    f.take_input(&s);
    s.show_input(f);
    return 0;
}