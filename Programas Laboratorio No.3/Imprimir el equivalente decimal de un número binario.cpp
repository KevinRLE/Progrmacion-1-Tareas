#include <iostream>

using namespace std;

int main() {
    int binario, decimal = 0, base = 1, residuo;

    cout << "Ingrese un numero binario (solo ceros y unos): ";
    cin >> binario;

    while (binario > 0) {
        residuo = binario % 10;
        if (residuo != 0 && residuo != 1) {
            cout << "Error: El numero ingresado no es binario." << endl;
            return 1;
        }
        decimal += residuo * base;
        binario /= 10;
        base *= 2;
    }

    cout << "El equivalente decimal es: " << decimal << endl;
    return 0;
}
