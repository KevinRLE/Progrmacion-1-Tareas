#include <iostream>
using namespace std;

int main()
{

#define ITERACIONES 5
int numeros[5];
unsigned int y;

for(y = 0; y < ITERACIONES; y++){
    cout << "Escriba cinco enteros en el rango 1 a 30: ";
    cin >> numeros[y];
}

    for (unsigned int j = 0; j < ITERACIONES; j++){
        for(unsigned int i = 1; i <= numeros[j]; i++){
            cout << '*';
        }
        cout << endl; // empieza nueva línea
    }
    return(0);
}
