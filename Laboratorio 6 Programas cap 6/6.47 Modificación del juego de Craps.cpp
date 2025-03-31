#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Prototipos de funciones
bool jugarCraps();
void mostrarMensaje(int saldo);

int main() {
    int saldoBanco = 1000;
    int apuesta;
    bool resultado;
    char continuar;

    srand(static_cast<unsigned int>(time(0)));

    cout << "Bienvenido a Craps Casino! Saldo inicial: $" << saldoBanco << endl;

    do {
        // Solicitar apuesta
        do {
            cout << "\nIngrese su apuesta (saldo actual: $" << saldoBanco << "): ";
            cin >> apuesta;

            if(apuesta <= 0 || apuesta > saldoBanco) {
                cout << "Apuesta invalida. Debe ser entre $1 y $" << saldoBanco << endl;
            }
        } while(apuesta <= 0 || apuesta > saldoBanco);

        // Jugar partida
        resultado = jugarCraps();

        // Actualizar saldo
        if(resultado) {
            saldoBanco += apuesta;
            cout << "\n¡Ganaste! +$" << apuesta << endl;
        } else {
            saldoBanco -= apuesta;
            cout << "\n¡Perdiste! -$" << apuesta << endl;

            if(saldoBanco == 0) {
                cout << "Lo siento. ¡Se quedo sin fondos!\n";
                break;
            }
        }

        // Mostrar mensajes personalizados
        mostrarMensaje(saldoBanco);

        cout << "\nNuevo saldo: $" << saldoBanco << endl;

        // Preguntar si desea seguir jugando
        if(saldoBanco > 0) {
            cout << "\nDesea seguir jugando? (s/n): ";
            cin >> continuar;
        }

    } while(saldoBanco > 0 && (continuar == 's' || continuar == 'S'));

    cout << "\nGracias por jugar! Saldo final: $" << saldoBanco << endl;

    return 0;
}

bool jugarCraps() {
    enum Estado { CONTINUAR, GANO, PERDIO };
    unsigned int sumaDeDados, miPunto;
    Estado estadoJuego;

    sumaDeDados = rand() % 6 + 1 + rand() % 6 + 1;
    cout << "\nTirada inicial: " << sumaDeDados << endl;

    switch(sumaDeDados) {
        case 7: case 11:
            estadoJuego = GANO;
            break;
        case 2: case 3: case 12:
            estadoJuego = PERDIO;
            break;
        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDeDados;
            cout << "Punto establecido en: " << miPunto << endl;
            break;
    }

    while(estadoJuego == CONTINUAR) {
        sumaDeDados = rand() % 6 + 1 + rand() % 6 + 1;
        cout << "Nuevo tiro: " << sumaDeDados << endl;

        if(sumaDeDados == miPunto) {
            estadoJuego = GANO;
        } else if(sumaDeDados == 7) {
            estadoJuego = PERDIO;
        }
    }

    return (estadoJuego == GANO);
}

void mostrarMensaje(int saldo) {
    if(saldo < 500) {
        cout << "Oh, ¡se esta yendo a la quiebra, verdad?";
    }
    else if(saldo < 1000) {
        cout << "Vamos, arriesguese un poco mas!";
    }
    else if(saldo < 1500) {
        cout << "Siga asi, la suerte esta de su lado!";
    }
    else {
        cout << "La hizo en grande! ¿No quiere retirarse?";
    }
    cout << endl;
}
