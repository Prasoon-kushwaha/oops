#include <iostream>
using namespace std;

class Account {
protected:
    string customer_name;
    string account_number;
    string account_type;
    double balance;
public:
    Account(string name, string number, string type) : customer_name(name), account_number(number), account_type(type), balance(0) {}
    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful." << endl;
    }

    void display_balance() {
        cout << "Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) = 0;
};

class CurrentAccount : public Account {
private:
    double minimum_balance;
    double service_charge;
public:
    CurrentAccount(string name, string number) : Account(name, number, "Current"), minimum_balance(1000), service_charge(50) {}

    void withdraw(double amount) override {
        if (balance - amount >= minimum_balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void check_minimum_balance() {
        if (balance < minimum_balance) {
            cout << "Balance is below minimum. Service charge imposed." << endl;
            balance -= service_charge;
        }
    }
};

class SavingsAccount : public Account {
private:
    double interest_rate;
public:
    SavingsAccount(string name, string number) : Account(name, number, "Savings"), interest_rate(0.00) {}

    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void compute_interest() {
        double interest = balance * interest_rate;
        balance += interest;
        cout << "Interest computed and deposited. Current balance: " << balance << endl;
    }
};

int main() {
    CurrentAccount current_account("Aditya", "22103");
    current_account.deposit(2000);
    current_account.check_minimum_balance();
    current_account.withdraw(1500);
    current_account.display_balance();

    SavingsAccount savings_account("Abhay", "22102");
    savings_account.deposit(5000);
    savings_account.compute_interest();
    savings_account.display_balance();

    return 0;
}
