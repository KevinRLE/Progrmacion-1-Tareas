#include <iostream>

using namespace std;

int main() {
    int contador = 1, numero, mayor, segundoMayor;

    cout << "Introduzca un numero: ";
    cin >> numero;
    mayor = numero;
    segundoMayor = numero;

    while (contador < 10) {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if (numero > mayor) {
            segundoMayor = mayor;
            mayor = numero;
        } else if (numero > segundoMayor) {
            segundoMayor = numero;
        }

        contador++;
    }

    cout << "El numero mas grande es: " << mayor << endl;
    cout << "El segundo numero mas grande es: " << segundoMayor << endl;

    return 0;
}
