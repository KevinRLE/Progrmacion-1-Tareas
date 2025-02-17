#include <iostream>

using namespace std;

int main() {

    int lado =0;
    cout<<"Ingresar un numero para el tamaño del cuadrado entre 1 y 20"<<endl;
    cin >> lado;

    if (lado <1 || lado >20){

        cout<<"ERROR, ingresar el rango indicado"<<endl;
        return (1);
    }

    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++){
            if (i == 0 || i == lado -1 || j == 0 || j == lado -1){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout <<endl;
    }


    return (0);

}
