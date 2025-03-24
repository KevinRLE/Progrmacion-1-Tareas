#include "Juego.h"
#include <fstream>
#include <unistd.h>

int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}

	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}

	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}
    //agregar parametro vidas
	Juego::Juego(Tablero tablero, int cantidadMinas, int vidas)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente();
		this->vidas = vidas; //agregar y declarar vidas
	}

	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}

	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}

	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}

	bool Juego::jugadorGana()
    {
        return this->tablero.contarCeldasSinMinasYSinDescubrir() == 0;
    }

	void Juego::iniciar()
	{
		int fila, columna;
		while (true)
		{
			this->tablero.imprimir();
			this->vidas = vidas;  //declare vidas
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
            //cambiar todo el ciclo de juego para las vidas
			if (!respuestaAUsuario) // Si pisa una mina
            {
                this->vidas--; // Restar una vida
                cout << "Pisas una mina! Vidas restantes: " << this->vidas << endl;

                if (this->vidas <= 0)
                {
                    cout << "Te quedaste sin vidas. Perdiste el Juego\n";
                    this->tablero.setModoDesarrollador(true);
                    this->tablero.imprimir();
                    break;
                }
            }
            //modificar el else para gestionar las vidas
			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
		}
	}
