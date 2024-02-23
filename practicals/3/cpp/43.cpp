#include <iostream>
using namespace std;


class Student {
public:
    int enrollment_no;
    Student(int x): enrollment_no(x) {}
};

class Test: virtual public Student {
public:
    int marks;
    Test(int x, int y): Student(x), marks(y) {}
};

class Sports: virtual public Student {
public:
    int score;
    Sports(int x, int y): Student(x), score(y) {}
};

class Result: public Test, public Sports {
public:
    Result(int enrollment_no, int marks, int score): Student(enrollment_no), Test(enrollment_no, marks), Sports(enrollment_no, score) {}
    void display() {
        cout << "Enrollment No: " << this->enrollment_no << endl;
        cout << "Test marks: " << this->marks << endl;
        cout << "Sports score: " << this->score << endl;
        cout << "Total: " << this->marks+this->score << endl;
    }
};


int main() {
    Result r(16618348, 48, 39);
    r.display();
    return 0;
}