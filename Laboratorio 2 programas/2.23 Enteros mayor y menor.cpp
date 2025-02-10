#include <iostream>

using namespace std;
int main (){
    int numeroUno=0, numeroDos=0, numeroTres=0, numeroCuatro=0, numeroCinco=0;

    cout<<"Ingrese 5 numeros enteros"<<endl;
    cin >> numeroUno >> numeroDos >> numeroTres >> numeroCuatro >> numeroCinco;

    //variables de apoyo
    int mayor = numeroUno;
    int menor = numeroUno;

    // Comparaciones
    if (numeroDos > mayor) mayor = numeroDos;
    if (numeroTres > mayor) mayor = numeroTres;
    if (numeroCuatro > mayor) mayor = numeroCuatro;
    if (numeroCinco > mayor) mayor = numeroCinco;

    if (numeroDos < menor) menor = numeroDos;
    if (numeroTres < menor) menor = numeroTres;
    if (numeroCuatro < menor) menor = numeroCuatro;
    if (numeroCinco < menor) menor = numeroCinco;

    // Resultados
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}

