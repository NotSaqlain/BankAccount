#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int iban;
    int balance = 0;

public:
    BankAccount() {
        cout << "Please provide more Info." << endl;
    }

    BankAccount (string n, int num, int b) {
        name = n;
        iban = num;
        balance = b;
    }

    void display() {
        cout << "NAME: " << name << endl;
        cout << "IBAN: " << iban << endl;
        cout << "BALANCE: " << balance << endl;
    }

    int deposit(int n) {
        balance += n;
        cout << "success";
        return balance;
    }

    int withdraw(int n) {
        balance -= n;
        cout << "success";
        return balance;
    }
};

int main() {
    bool end = false;
    int ans;

    cout << "Welcome to nathional bank" << endl;

    do {
        cout << "Select: " << endl;
        cout << "1) Show info. \n"
                " 2) Deposit. << \n"
                " 3) Withdraw." << endl;
    } while (!end);
}