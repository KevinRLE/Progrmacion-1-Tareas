
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Variables operadores
    float pesoLibras=0;
    float pesoKilogramos =0;
    float alturaPulgadas=0;
    float alturaMetros=0;
    float resultadoMasa;
    int opcionSeleccionada;
    char salidaMenu;

     do
    {
        system("cls");
        //Ingreso de datos
        opcionSeleccionada=0;
        resultadoMasa=0;
        cout << "Calculadora IMC" << endl;
        //Menu de opciones en calculadora
        cout << "1. Peso en libras y altura en pulgadas" << endl;
        cout << "2. Peso en kilogramos y altura en metros" << endl;
        cout << "   Opcion: ";
        cin >> opcionSeleccionada;

        // Estructuras condicionales
        bool datosValidos = true;

        if (opcionSeleccionada == 1)
        {
            cout << "Ingresar peso en libras" << endl;
            cin >> pesoLibras;
            cout << "Ingresar Altura en pulgadas" << endl;
            cin >> alturaPulgadas;
            if (pesoLibras <= 0 || alturaPulgadas <= 0){
                cout <<"Ingresar datos mayores a 0" << endl;
                datosValidos = false;
            }

        } else if (opcionSeleccionada == 2) {
            cout << "Ingresar peso en Kilogramos" << endl;
            cin >> pesoKilogramos;
            cout << "Ingresar Altura en Metros" << endl;
            cin >> alturaMetros;
            if (pesoKilogramos <= 0 || alturaMetros <= 0){
                cout <<"Ingresar datos mayores a 0" << endl;
                datosValidos = false;
            }
        } else {
            cout << "Error opcion seleccionada" << endl;
            datosValidos = false;
        }

        if (datosValidos){
            switch  (opcionSeleccionada)
            {
                case 1:
                        resultadoMasa = (pesoLibras * 703)/(alturaPulgadas * alturaPulgadas);
                    break;
                case 2:
                        resultadoMasa = pesoKilogramos/(alturaMetros * alturaMetros);
                    break;
                default:
                    datosValidos = false;
            }
        }
        if (datosValidos){
            cout << "Su IMC es de: " << resultadoMasa << endl;
            if (resultadoMasa <= 18.5){
                cout << "Bajo Peso " << endl;
            } else if (resultadoMasa > 18.5 && resultadoMasa <= 24.9){
                cout << "Normal " << endl;
            } else if (resultadoMasa > 25 && resultadoMasa <= 29.9){
                cout << "Sobrepeso " << endl;
            } else if (resultadoMasa > 30){
                cout << "Obesidad " << endl;
            }
        }
        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');
    return 0;
}
