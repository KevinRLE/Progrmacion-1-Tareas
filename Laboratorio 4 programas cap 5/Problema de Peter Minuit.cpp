#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double montoInicial = 24.00;
    int anios = 2013 - 1626;

    cout << "Tasa de Interes (%)  Monto Final ($)" << endl;
    cout << fixed << setprecision(2);

    // Bucle para probar tasas de interés del 5% al 10%
    for (double tasa = 5.0; tasa <= 10.0; tasa += 1.0) {
        double tasaDecimal = tasa / 100.0;
        double montoFinal = montoInicial * pow(1 + tasaDecimal, anios);

        cout << setw(16) << tasa << setw(16) << montoFinal << endl;
    }

    return 0;
}

