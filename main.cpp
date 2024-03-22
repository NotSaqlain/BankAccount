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
    }
};