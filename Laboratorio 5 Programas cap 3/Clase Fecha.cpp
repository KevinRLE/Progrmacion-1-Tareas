#include <iostream>
using namespace std;

class Fecha {
private:
    int mes;
    int dia;
    int anio;

    // Funci�n para validar d�as en cada mes
    bool esDiaValido(int d, int m, int a) {
        // D�as m�ximos por mes
        int diasPorMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        // Verificar a�o bisiesto
        if (m == 2 && ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))) {
            diasPorMes[1] = 29;
        }

        return (d >= 1 && d <= diasPorMes[m - 1]);
    }

public:
    // Constructor con validaciones
    Fecha(int m, int d, int a) {
        establecerMes(m);
        establecerAnio(a);
        establecerDia(d);
    }

    // Setters con validaci�n
    void establecerMes(int m) {
        if (m >= 1 && m <= 12) {
            mes = m;
        } else {
            mes = 1;
            cout << "Mes invalido, ajustado a 1." << endl;
        }
    }

    void establecerDia(int d) {
        if (esDiaValido(d, mes, anio)) {
            dia = d;
        } else {
            dia = 1;
            cout << "D�a invalido, ajustado a 1." << endl;
        }
    }

    void establecerAnio(int a) {
        if (a > 0) {
            anio = a;
        } else {
            anio = 2000;
            cout << "Anio invalido, ajustado a 2000." << endl;
        }
    }

    // Getters
    int obtenerMes() const { return mes; }
    int obtenerDia() const { return dia; }
    int obtenerAnio() const { return anio; }

    // Muestra la fecha en formato mes/d�a/a�o
    void mostrarFecha() const {
        cout << mes << "/" << dia << "/" << anio << endl;
    }
};

int main() {
    // Caso 1: Fecha v�lida
    Fecha cumpleanios(12, 15, 1990);
    cout << "Fecha de nacimiento: ";
    cumpleanios.mostrarFecha();

    // Caso 2: Mes inv�lido
    Fecha error(13, 32, 2023);
    cout << "\nFecha con valores invalidos: ";
    error.mostrarFecha();

    // Caso 3: Correcci�n de valores
    error.establecerMes(2);
    error.establecerDia(29);  // A�o 2023 no es bisiesto
    cout << "\nFecha corregida: ";
    error.mostrarFecha();

    // Caso 4: A�o inv�lido
    Fecha anioNegativo(5, 20, -10);
    cout << "\nFecha con anio invalido: ";
    anioNegativo.mostrarFecha();

    return 0;
}
