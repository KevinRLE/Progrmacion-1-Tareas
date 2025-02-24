
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int terminos = 1000;  // N�mero de t�rminos a calcular
    double pi = 0.0;

    cout << "Termino\tValor Aproximado de Pi" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < terminos; i++) {
        double termino = 4.0 / (2 * i + 1);  // C�lculo del t�rmino actual
        if (i % 2 == 0) {
            pi += termino;  // Suma si es un t�rmino par
        } else {
            pi -= termino;  // Resta si es un t�rmino impar
        }

        cout << (i + 1) << "\t" << fixed << setprecision(10) << pi << endl;  // Imprime la tabla
    }

    return 0;
}
