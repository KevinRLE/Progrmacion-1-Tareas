#include <iostream>

using namespace std;

int main(){

    char letra, salidaMenu;

    do
    {
        //Ingresa datos
        cout <<"Ingrese una letra"<<endl;
        cin >> letra;

        //convierte dato
        cout <<static_cast<int>(letra);

        //desicion de ciclo
        cout << "\n Desea Ingresar otro dato Si=S o No=N" << endl;
        cin >> salidaMenu;

    }while (salidaMenu == 's'||salidaMenu == 'S');
    return 0;
}
