#include <iostream>
using namespace std;

int main() {
    // Secuencia 1: 10, 8, 6, 4, 2, 0, -2, -4, -6, -8, -10
    cout << "Secuencia 1: ";
    for (int i = 10; i >= -10; i -= 2) {
        cout << i << " ";
    }
    cout << endl;

    // Secuencia 2: 1, 4, 7, 10, 13, 16, 19, 22
    cout << "Secuencia 2: ";
    for (int i = 1; i <= 22; i += 3) {
        cout << i << " ";
    }
    cout << endl;

    // Secuencia 3: 1, 3, 9, 27, 81
    cout << "Secuencia 3: ";
    for (int i = 1; i <= 81; i *= 3) {
        cout << i << " ";
    }
    cout << endl;

    // Secuencia 4: 0, 1, 2, 4, 5, 7, 8, 10, 11, 13, 14
    cout << "Secuencia 4: ";
    for (int i = 0; i <= 14; i++) {
        if (i % 3 != 2) {  // Para saltar números en el patrón
            cout << i << " ";
        }
    }
    cout << endl;

    // Secuencia 5: 54, 27, 13, 6, 3, 1, 0
    cout << "Secuencia 5: ";
    for (int i = 54; i > 0; i = (i == 1) ? 0 : i / 2) {
        cout << i << " ";
    }
    cout << endl;

    // Secuencia 6: A, B, C, D, ..., X, Y, Z
    cout << "Secuencia 6: ";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}


