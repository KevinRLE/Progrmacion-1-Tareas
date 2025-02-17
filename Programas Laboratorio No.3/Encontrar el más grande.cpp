#include <iostream>

using namespace std;


int main(){
    int contador=1, numero=0, mayor=0;

    cout << "Introduzca un numero: ";
    cin >> numero;
    mayor = numero;

    while (contador < 10) {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if (numero > mayor) {
            mayor = numero;
        }

        contador++;
    }

    cout << "El numero mas grande es: " << mayor << endl;

    return 0;
}
