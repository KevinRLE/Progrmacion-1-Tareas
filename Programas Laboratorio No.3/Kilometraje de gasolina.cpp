#include <iostream>

using namespace std;

int main() {
    double km, litros, totalKm = 0, totalLitros = 0;

    cout << "Escriba los kilometros usados (-1 para salir): ";
    cin >> km;

    while (km != -1) {
        cout << "Escriba los litros: ";
        cin >> litros;

        if (litros == 0) {
            cout << "Error: Los litros no pueden ser cero." << endl;
        } else {
            double kpl = km / litros;
            cout << "KPL en este reabastecimiento: " << kpl << endl;

            totalKm += km;
            totalLitros += litros;

            double totalKPL = totalKm / totalLitros;
            cout << "Total KPL: " << totalKPL << endl;
        }

        cout << "Escriba los kilometros usados (-1 para salir): ";
        cin >> km;
    }

    cout << "Fin del programa." << endl;
    return 0;
}
