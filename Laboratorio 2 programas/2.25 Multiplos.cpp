#include <iostream>

using namespace std;

int main (){

    int numeroUno=0, numeroDos=0, resultado=0;
    cout<<"Ingresa dos numeros enteros"<<endl;
    cin >> numeroUno >> numeroDos;

    resultado = numeroUno % numeroDos;

    if(resultado == 0){
    cout<<"La primera cantidad es Multiplo del segundo"<<endl;
    }
    else{
    cout<<"Los numeros no son multiplos"<<endl;
    }

    return 0;

}
