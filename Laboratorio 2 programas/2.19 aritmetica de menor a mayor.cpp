#include <iostream>

using namespace std;

int main () {

    int numeroUno=0, numeroDos=0, numeroTres=0;

    cout <<"Ingrese tres numeros enteros"<<endl;
    cin >> numeroUno >> numeroDos >> numeroTres;

    //Mayor

    int mayor = numeroUno;
    if (numeroDos > mayor) {
        mayor = numeroDos;
    }
    if (numeroTres > mayor) {
        mayor = numeroTres;
    }

    // Menor
    int menor = numeroUno;
    if (numeroDos < menor) {
        menor = numeroDos;
    }
    if (numeroTres < menor) {
        menor = numeroTres;
    }

    // Resultados
    cout << "La suma es: " << (numeroUno + numeroDos + numeroTres) << endl;
    cout << "El promedio es: " << (numeroUno + numeroDos + numeroTres) / 3.0 << endl;
    cout << "El producto es: " << (numeroUno * numeroDos * numeroTres) << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
