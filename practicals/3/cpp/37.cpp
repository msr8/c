#include <iostream>
using namespace std;

class Employee
{
    string name;
    int    age;
    string address;

public:
    void getData()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, address);
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};


int main()
{
    Employee e1;
    e1.getData();
    cout << endl;
    e1.showData();

    return 0;
}