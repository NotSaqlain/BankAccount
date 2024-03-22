#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name = "admin";
    int iban = 101010;
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
        cout << "BALANCE: " << balance << "$" << endl;
        cout << endl;
    }

    int deposit(int n) {
        balance += n;
        cout << endl;
        cout << endl;
        return balance;
    }

    int withdraw(int n) {
        if (balance - n > 0) {
            balance -= n;
            cout << endl;
        } else {
            cout << "not enough balance" << endl;
        }
    return balance;
    }
};

int main() {
    bool end = false;
    int ans;
    int temp;

    BankAccount account("Saqlain", 109826, 100);

    cout << "Welcome to national bank\n" << endl;

    do {
        cout << "Select: " << endl;
        cout << "1) Show info. \n2) Deposit. \n3) Withdraw. \n4) Exit \n\n: ";
        
        cin >> ans;
        if (ans == 1){
            account.display();
        } else if (ans == 2) {
            cout << "input: ";
            cin >> temp;
            cout << "new balance: " << account.deposit(temp);
        } else if (ans == 3) {
            cout << "input: ";
            cin >> temp;
            cout << "new balance: " << account.withdraw(temp);
        } else if (ans == 4) {
            end = true;
        }

    } while (!end);
}