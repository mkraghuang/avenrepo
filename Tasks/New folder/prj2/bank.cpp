#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string accNum, string accHolder, double initialBalance) {
        accountNumber = accNum; // Set the account number
        accountHolderName = accHolder; // Set the account holder's name
        balance = initialBalance; // Set the initial balance
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    myAccount.display();

    myAccount.deposit(500.0);
    myAccount.display();

    myAccount.withdraw(200.0);
    myAccount.display();

    myAccount.withdraw(1500.0); // This will display "Insufficient funds."
    myAccount.display();

    return 0;
}
