// WAP declaring a Java class called SavingsAccount with members `accountNumber` and `Balance`. Provide member functions as `depositAmount()` and `withdrawAmount()`. If user tries to withdraw an amount greater than their balance then throw a user-defined exception
class InsufficientBalanceException extends Exception {
    InsufficientBalanceException(String message) {
        super(message);
    }
}

class SavingsAccount {
    int accountNumber;
    int balance;

    SavingsAccount(int accountNumber, int balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void depositAmount(double amount) {
        this.balance += amount;
    }

    void withdrawAmount(double amount) throws InsufficientBalanceException {
        if (amount > this.balance) {
            throw new InsufficientBalanceException("Insufficient balance");
        }
        this.balance -= amount;
    }
}


class Main {
    public static void main(String[] args) {
        SavingsAccount account = new SavingsAccount(123456, 1000);
        System.out.println("Current balance: " + account.balance);

        try {
            account.withdrawAmount(500);
            System.out.println("Withdrawn 500.  New balance: " + account.balance);
            account.depositAmount(1000);
            System.out.println("Deposited 1000. New balance: " + account.balance);
        }
        catch (InsufficientBalanceException e) {
            System.out.println(e);
        }
    }
}