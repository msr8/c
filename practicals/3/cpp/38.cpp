#include <iostream>
using namespace std;

class CAccount
{
    int   accountNumber;
    float accountBalance;
public:
    CAccount(int accountNumber, float accountBalance)
    {
        this->accountNumber  = accountNumber;
        this->accountBalance = accountBalance;
    }

    CAccount()
    {
        cout << "Enter account number:  ";
        cin >> accountNumber;
        cout << "Enter account balance: ";
        cin >> accountBalance;
    }

    void inputTransaction()
    {
        char  transactionType;
        float transactionAmount;
        cout << "Enter transaction type (D for deposit, W for withdrawal): ";
        cin >> transactionType;
        cout << "Enter transaction amount: ";
        cin >> transactionAmount;

        if      (transactionType == 'D') {accountBalance += transactionAmount;}
        else if (transactionType == 'W') {accountBalance -= transactionAmount;}
        else {cout << "Invalid transaction type!" << endl;}
    }

    void printBalance()
    {
        cout << "Account number:  " << accountNumber << endl;
        cout << "Account balance: " << accountBalance << endl;
    }
};


int main()
{
    CAccount a1;
    cout << endl;
    a1.inputTransaction();
    cout << endl;
    a1.printBalance();

    return 0;
}