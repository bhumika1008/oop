#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    string customer_name;
    int account_number;
    string account_type;
    float balance;

public:
    void create_account() {
        cout << "Enter Customer Name: ";
        getline(cin, customer_name);
        cout << "Enter Account Number: ";
        cin >> account_number;
        cin.ignore();
        cout << "Enter Account Type (Saving/Current): ";
        getline(cin, account_type);
        balance = 0.0;
    }

    void display_balance() {
        cout << "Customer Name: " << customer_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Rs. " << amount << " deposited successfully." << endl;
    }

    bool withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
            return true;
        } else {
            cout << "Insufficient balance!" << endl;
            return false;
        }
    }
};

// Derived class for Saving Account
class Saving_account : public Account {
public:
    void saving_features() {
        cout << "Saving Account: Interest will be added yearly (not implemented here)." << endl;
    }
};

// Derived class for Current Account
class Current_account : public Account {
public:
    void current_features() {
        cout << "Current Account: No interest, but overdraft not allowed." << endl;
    }
};

// Main function
int main() {
    Saving_account sa;
    Current_account ca;
    int choice;
    float amount;

    cout << "--- Create Saving Account ---\n";
    sa.create_account();
    sa.saving_features();

    do {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            sa.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            sa.withdraw(amount);
            break;
        case 3:
            sa.display_balance();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}

