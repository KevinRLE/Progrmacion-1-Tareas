#include <iostream>

using namespace std;

int main() {
    int ventasBrutas=0;
    double comisiones=0;

    cout <<"Introduzca las ventas en dolares (-1 para salir): "<<endl;
    cin >> ventasBrutas;

    while (ventasBrutas != -1) {

        if (ventasBrutas <= 0) {
            cout << "Error: Las ventas no pueden menor a cero." << endl;
        } else {
            double salario = 200 + (ventasBrutas*0.09);
            cout <<"El salario es: $"<< salario <<endl;

        }

        cout <<"Introduzca las ventas en dolares (-1 para salir): "<<endl;
        cin >> ventasBrutas;

}
    cout << "Fin del programa." << endl;
    return (0);
}
