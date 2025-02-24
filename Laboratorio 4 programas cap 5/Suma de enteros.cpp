#include <iostream>

using namespace std;

int main() {

int numeroSecuencia=0, valor = 0, suma=0;
    cout<<"Ingrese el numero de secuencias"<<endl;
    cin >> numeroSecuencia;


    for(unsigned int x = 0; x < numeroSecuencia; x++){
        cout<<"Ingrese un numero"<<endl;
        cin >> valor;
        suma += valor;
    }

    cout<< "suma es de: "<< suma <<endl;

    return(0);
}
