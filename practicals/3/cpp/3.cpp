#include <iostream>
#include <string>
using namespace std;


struct Student {
    int    roll_no;
    string name;
    float  marks;
    char   grade;
};



int main() {
    struct Student student = {134, "Moksh Jain", 98, 'A'};
    
    cout << "Details of the student:" << endl;
    cout << "Roll Number: " << student.roll_no << endl;
    cout << "Name:        " << student.name    << endl;
    cout << "Marks:       " << student.marks   << endl;
    cout << "Grade:       " << student.grade   << endl;
    
    return 0;
}