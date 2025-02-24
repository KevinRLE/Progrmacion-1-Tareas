// C�lculo del inter�s compuesto con tasas de inter�s variables.
#include <iostream>
#include <iomanip>
#include <cmath> // Biblioteca matem�tica est�ndar
using namespace std;

int main() {
    double monto;
    double principal = 1000.0; // Monto inicial antes del inter�s

    // Encabezados
    cout << setw(6) << "Tasa" << setw(6) << "Anio" << setw(18) << "Monto en deposito" << endl;

    // Formato de salida
    cout << fixed << setprecision(2);

    // Bucle para variar la tasa de inter�s de 5% a 10%
    for (double tasa = 0.05; tasa <= 0.10; tasa += 0.01) {
        for (unsigned int anio = 1; anio <= 10; ++anio) {
            monto = principal * pow(1.0 + tasa, anio);
            cout << setw(6) << (tasa * 100) << "%" << setw(6) << anio << setw(18) << monto << endl;
        }
        cout << endl; // Salto de l�nea para separar cada tasa de inter�s
    }

    return 0;
}
