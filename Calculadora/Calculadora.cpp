#include <iostream>
using namespace std;
int main() {
    int opcionMenu = 0, numero1, numero2;

    while (opcionMenu != 5) {
        cout <<"¿Que desea hacer? "<< endl;
        cout <<"1. Sumar, 2. Restar, 3. Multiplicar, 4. Dividir, 5. Salir del programa"<< endl;
        cout <<"Ingresar una Opcion";
        cin >> opcionMenu;

        if (opcionMenu >= 1 && opcionMenu <= 4) {

            cout <<"Ingrese un Numero"<< endl;
            cin >> numero1;
            cout <<"Ingrese otro Numero"<< endl;
            cin >> numero2;

            if (opcionMenu == 1) {
                cout <<"Usted ha sumado " << numero1 << " y " << numero2
                      <<" Su resultado es " << (numero1 + numero2) << endl;
            } else if (opcionMenu == 2) {
                cout <<"Usted ha restado " << numero1 << " y " << numero2
                     <<" Su resultado es " << (numero1 - numero2) << endl;
            } else if (opcionMenu == 3) {
                cout <<"Usted ha multiplicado " << numero1 << " y " << numero2
                     <<" Su resultado es " << (numero1 * numero2) << endl;
            } else if (opcionMenu == 4) {
                if (numero2 == 0){
                    cout <<"Error, no se puede dividir por cero" << endl;
                } else {
                    cout <<"Usted ha dividido " << numero1 << " y " << numero2
                         <<" Su resultado es " << (numero1 / numero2) << endl;
                }
            }
        } else if (opcionMenu != 5){
            cout <<"Opcion no valida, intenta de nuevo" << endl;
        }
    }
    cout <<"Saliendo del programa" << endl;
    return 0;
}
