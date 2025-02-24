#include <iostream>

using namespace std;


int main () {

#define ENTEROS 15
int productoImpares = 1;

    cout<<"Producto de impares"<<endl;

    for(int y = 1; y <= ENTEROS; y+=2){

        productoImpares *= y;
    }

    cout<<"El producto de impares es de " << productoImpares<<endl;
}

