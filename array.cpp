#include <iostream>

using namespace std;

class Array{
private:
    int v[10];

public:

    Array() {
        cout << "404 not found" << endl;
    }

    Array(int vet[]) {
        for (int i = 0; i < 10; i++) {
            v[i] = vet[i];
        }
    }
    
    void fill() {
        for (int i = 0; i < 10; i++) {
            v[i] = rand() % 100;
        }
    }
    
    void stampa() {
        for (int i = 0; i < 10; i++) {
            cout << v[i] << " - ";
        }
        cout << endl;
    }
    
    void arrange() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (v[j] > v[i]) {
                    int temp = v[j];
                    v[j] = v[i];
                    v[i] = temp;
                }
            }
        }
    }
};


int main() {
    int v[10];

    Array vet(v);
    
    vet.fill();
    vet.stampa();
    
    vet.arrange();
    vet.stampa();



    return 0;
}