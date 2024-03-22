#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int number;
    int balance = 0;

public:
    BankAccount() {
        cout << "Please provide more Info." << endl;
    }

    BankAccount (string n, int num, int b) {
        name = n;
        number = num;
        balance = b;
    }
};