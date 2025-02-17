#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese tres enteros distintos de cero: ";
    cin >> a >> b >> c;

    // Verificar que los valores sean positivos
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error: Todos los valores deben ser mayores que cero." << endl;
        return 1;
    }

    int lados[3] = {a, b, c};
    // ordenar lados de menor a mayor
    sort(lados, lados + 3);
    int x = lados[0], y = lados[1], z = lados[2];

    // teorema de pitagoras
    if (x * x + y * y == z * z) {
        cout << "Los valores pueden formar un triangulo rectangulo." << endl;
    } else {
        cout << "Los valores NO pueden formar un triangulo rectangulo." << endl;
    }

    return 0;
}
