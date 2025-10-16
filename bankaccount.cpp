#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNo, string accName, double initialBalance) {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Function to display balance and account details
    void displayBalance() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    int accNo;
    string accName;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Account Holder Name: ";
    cin.ignore(); // To clear input buffer
    getline(cin, accName);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    // Create account object
    BankAccount account(accNo, accName, initialBalance);

    int choice;
    double amount;

    do {
        cout << "\n--- Bank Menu ---";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Balance";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
