#include<bits/stdc++.h>
using namespace std;

class Account
{
    protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

    public:
    Account(string name, int number, string type) : customerName(name), accountNumber(number), accountType(type), balance(0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited:  " << amount <<endl;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
    virtual void computeInterest() = 0;
    virtual void withdraw(double amount) = 0;
    
};


class SavingsAccount :public Account
{
    private:
    double interestRate;

public:
  
    SavingsAccount(string name, int number, double rate) : Account(name, number, "Savings"), interestRate(rate) {}

    void computeInterest() override {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest of " << interest << " deposited.\n";
    }

    void withdraw(double amount) override {
        if (balance - amount < 0) {
            cout << "Insufficient funds." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal:  " << amount << " \n";
    }
};


class CurrAccount : public Account
{
    public:
    int minBalance;
    int serviceCharge;

    CurrAccount(string name, int number, double minBal, double charge) : Account(name, number, "Current"), minBalance(minBal), serviceCharge(charge) {}

    void computeInterest() override {}

    void withdraw(double amount) override {
        if (balance - amount < minBalance) {
            cout << "Insufficient funds." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal : " << amount << "\n";
    }

    void checkMinimumBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum. Service charge of " << serviceCharge << " imposed.\n";
            balance -= serviceCharge;
        }
    }
};



int main()
{
    CurrAccount A("Prasoon",2300,300,12);
    A.deposit(5000);
    A.checkMinimumBalance();
    A.computeInterest();
    A.withdraw(1000);

}