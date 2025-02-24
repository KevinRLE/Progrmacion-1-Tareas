#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo;  // Código de pago del empleado
    double salarioSemanal = 0.0;

    cout << "Ingrese el codigo del empleado (1=Gerente, 2=Por horas, 3=Comision, 4=Por piezas): ";
    cin >> codigo;

    switch (codigo) {
        case 1: { // Gerente (salario fijo semanal)
            double salarioFijo;
            cout << "Ingrese el salario semanal del gerente: ";
            cin >> salarioFijo;
            salarioSemanal = salarioFijo;
            break;
        }
        case 2: { // Trabajador por horas
            double sueldoHora, horasTrabajadas;
            cout << "Ingrese el sueldo por hora: ";
            cin >> sueldoHora;
            cout << "Ingrese las horas trabajadas en la semana: ";
            cin >> horasTrabajadas;

            if (horasTrabajadas <= 40) {
                salarioSemanal = sueldoHora * horasTrabajadas;
            } else {
                salarioSemanal = (40 * sueldoHora) + ((horasTrabajadas - 40) * sueldoHora * 1.5);
            }
            break;
        }
        case 3: { // Empleado por comisión
            double ventasSemanales;
            cout << "Ingrese el total de ventas semanales: ";
            cin >> ventasSemanales;
            salarioSemanal = 250 + (0.057 * ventasSemanales);
            break;
        }
        case 4: { // Trabajador por piezas
            double pagoPorPieza;
            int cantidadPiezas;
            cout << "Ingrese el pago por cada pieza: ";
            cin >> pagoPorPieza;
            cout << "Ingrese la cantidad de piezas producidas en la semana: ";
            cin >> cantidadPiezas;
            salarioSemanal = pagoPorPieza * cantidadPiezas;
            break;
        }
        default:
            cout << "Código de empleado invalido. Intente nuevamente." << endl;
            return 1; // Termina el programa con error
    }

    cout << fixed << setprecision(2);
    cout << "El salario semanal del empleado es: $" << salarioSemanal << endl;

    return 0;
}

