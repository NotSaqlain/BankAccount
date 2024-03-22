#include <iostream>
#include <cstdlib>

using namespace std;

class Array{
private:
    int v[];

public:

    Array() {
        cout << "404 not found" << endl;
    }

    Array(int v[]) {
        for (int i = 0; i < 10; i++) {
            v[i] = rand() % 100;
        }
    }

    void stampa() {
        for (int i = 0; i < 10; i++) {
            cout << v[i];
        }
    }
};


int main() {
    int v[10];

    Array vet(v);

    vet.stampa();



    return 0;
}