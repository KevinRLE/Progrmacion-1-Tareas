#include <iostream>
#include <string>
using namespace std;

class Cuenta {
public:
    unsigned int numeroCuenta;
    string primerNombre;
    string apellido;
    double saldo;

    // Constructor que recibe los parámetros para inicializar los miembros de datos
    Cuenta(unsigned int num, string nombre, string apellido, double saldoInicial)
        : numeroCuenta(num), primerNombre(nombre), apellido(apellido), saldo(saldoInicial) {}
};
int main() {

    unsigned int contadorEstudiantes{0};

    double saldoInicial{1000.0};
    //inicializador del objeto
    Cuenta cuenta1{12345, "Juan", "Pérez", 5000.0};

    cout << "Contador de Estudiantes: " << contadorEstudiantes << endl;
    cout << "Saldo Inicial: $" << saldoInicial << endl;
    cout << "Cuenta de " << cuenta1.primerNombre << " " << cuenta1.apellido
         << " (Numero de cuenta: " << cuenta1.numeroCuenta << ") tiene un saldo de $"
         << cuenta1.saldo << endl;

    return 0;
}
