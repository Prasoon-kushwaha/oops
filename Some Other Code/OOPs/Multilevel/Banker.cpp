#include<bits/stdc++.h>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    Account(string name, int number, string type) : customerName(name), accountNumber(number), accountType(type), balance(0) {}

    // Function to accept deposit
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " made successfully.\n";
    }

    // Function to display balance
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }

    // Function to compute and deposit interest
    virtual void computeInterest() = 0;

    // Function to permit withdrawal
    virtual void withdraw(double amount) = 0;
};

class CurrentAccount : public Account {
private:
    double minBalance;
    double serviceCharge;

public:
    // Constructor
    CurrentAccount(string name, int number, double minBal, double charge) : Account(name, number, "Current"), minBalance(minBal), serviceCharge(charge) {}

    // Function to compute and deposit interest (not applicable for current account)
    void computeInterest() override {}

    // Function to permit withdrawal and update balance
    void withdraw(double amount) override {
        if (balance - amount < minBalance) {
            cout << "Insufficient funds. Cannot withdraw." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal of " << amount << " made successfully.\n";
    }

    // Function to check for minimum balance, impose penalty if necessary, and update balance
    void checkMinimumBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum. Service charge of " << serviceCharge << " imposed.\n";
            balance -= serviceCharge;
        }
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount(string name, int number, double rate) : Account(name, number, "Savings"), interestRate(rate) {}

    // Function to compute and deposit interest
    void computeInterest() override {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest of " << interest << " deposited.\n";
    }

    // Function to permit withdrawal and update balance
    void withdraw(double amount) override {
        if (balance - amount < 0) {
            cout << "Insufficient funds. Cannot withdraw." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal of " << amount << " made successfully.\n";
    }
};

int main() {
    // Example usage
    CurrentAccount current("Ram Singh", 12345, 1000, 50);
    SavingsAccount savings("JAnant", 54321, 5);

    current.deposit(2000);
    current.displayBalance();
    current.checkMinimumBalance();
    current.withdraw(1500);
    current.displayBalance();
    current.checkMinimumBalance();

    cout << endl;

    savings.deposit(3000);
    savings.displayBalance();
    savings.computeInterest();
    savings.displayBalance();
    savings.withdraw(1000);
    savings.displayBalance();

    return 0;
}
