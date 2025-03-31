#include<iostream>
#include<cmath>


using namespace std;


double hipotenusa(double a, double b){

    return sqrt(pow(a, 2) + pow(b, 2));
}


int main(){


    double a = 0;
    double b = 0;
    cout<< "Ingresar primer medida del primer lado del traingulo" << endl;
    cin >> a;
    cout<< "Ingresar segunda medida del segundo lado del traingulo" << endl;
    cin >> b;

    double resultado = hipotenusa(a, b);
    cout <<"La hipotenusa es: "<< resultado <<endl;

    return (0);
}
