#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
public:
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    void print() {
        cout << "Name:        " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};


int main() {
    Student* obj = new Student("John", 1);
    obj->print();

    return 0;
}