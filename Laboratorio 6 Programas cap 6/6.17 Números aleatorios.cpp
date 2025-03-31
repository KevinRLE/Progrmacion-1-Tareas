#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    // Inicializamos la semilla del generador de números aleatorios
    srand(time(0));

    // a) Imprime un número al azar del conjunto {2, 4, 6, 8, 10}
    cout << 2 + 2 * (rand() % 5) << endl;

    // b) Imprime un número al azar del conjunto {3, 5, 7, 9, 11}
    cout << 3 + 2 * (rand() % 5) << endl;

    // c) Imprime un número al azar del conjunto {6, 10, 14, 18, 22}
    cout << 6 + 4 * (rand() % 5) << endl;

    return 0;
}
