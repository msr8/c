#include <iostream>
#include <string>
using namespace std;


class Employee {
    private:
        int salary;
    
    public:
        void setSalary(int s) {salary = s;}    // Setter
        int  getSalary() {return salary;}      // Getter

};


int main() {
    Employee e1;
    e1.setSalary(100);
    cout << "Salary of e1 is " << e1.getSalary() << endl;

    // This will produce an error
    // cout << "Salary of e1 is " << e1.salary << endl;

    return 0;
}



// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users
// To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class)
// If you want others to read or modify the value of a private member, you can provide public get and set methods
