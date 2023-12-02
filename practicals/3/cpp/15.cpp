#include <iostream>
#include <cmath>
using namespace std;

class FixedDeposit {
    int account_number;
    float principal;
    float time;
    float interest;

public:
    // Parameterized constructor for dynamic initialization
    FixedDeposit(int account_number, float principal, float time, float interest) {
        this->account_number = account_number;
        this->principal      = principal;
        this->time           = time;
        this->interest       = interest;
    }

    // Function to calculate maturity amount
    double calculateMaturityAmount() const {
        return principal * pow( (1+interest/100) , time );
    }

    // Function to display fixed deposit details
    void displayDetails() const {
        cout << "Account number: " << account_number << endl;
        cout << "Principal: " << principal << endl;
        cout << "Time: " << time << endl;
        cout << "Interest: " << interest << endl;
        cout << "Maturity amount: " << calculateMaturityAmount() << endl;
    }
};

int main() {
    FixedDeposit* obj = new FixedDeposit(12345, 5000, 5, 8.5);
    obj->displayDetails();
    delete obj;

    return 0;
}
