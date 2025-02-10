#include <iostream>

using namespace std;

int main () {

    int numeroUno = 0, cuadrado = 0, cubo = 0;

    cout<<"Ingresar Un entero"<<endl;
    cin >> numeroUno;



    //ciclo
    for(int i=0; i <= 10; i++){

            numeroUno = i;

        //operaciones
        cuadrado = numeroUno * numeroUno;
        cubo = numeroUno * numeroUno * numeroUno;

        //resultados
        cout <<"\n Entero " << numeroUno <<"\t Cuadrado " << cuadrado <<"\t Cubo " << cubo <<endl;

    }


    return 0;

}


