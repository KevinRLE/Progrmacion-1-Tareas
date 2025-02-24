#include <iostream>

using namespace std;

int main() {
    int n = 5; // Tamaño del rombo (altura de la mitad del rombo)

    // Parte superior del rombo
    for (int i = 1; i <= n; i++) {
        // Imprimir espacios
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl; // Nueva línea
    }

    // Parte inferior del rombo
    for (int i = n - 1; i >= 1; i--) {
        // Imprimir espacios
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl; // Nueva línea
    }

    return 0;
}
