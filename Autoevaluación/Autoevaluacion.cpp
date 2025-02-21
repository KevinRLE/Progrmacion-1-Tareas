#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctime>

#define ALUMNOS 5
#define NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100

using namespace std;

// Prototipos de funciones
void llamarCiclo();
void notasFinales(int notaParcialUno, int notaParcialDos, int actividades, int examenFinal);
int busquedaAleatoriaDeNotas(int minimo, int maximo);
void llenarMatriz(float matriz[ALUMNOS][NOTAS+1]);
void imprimirMatriz(float matriz[ALUMNOS][NOTAS+1], string nombreAlumnos[]);
void InicializarMatriz(float matriz[ALUMNOS][NOTAS+1]);

int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    llamarCiclo();
    return 0;
}

void llamarCiclo() {
    float matrizFacultad_1[ALUMNOS][NOTAS+1];

    char opcion;
    bool repetir = true;
    float promedios;

    string alumnosFacultad[ALUMNOS] = {"Kevin", "Luis", "Carlos", "Pedro", "Marcos"};

    do {
        promedios = 0;
        system("cls");

        cout << "\tNotas de los Alumnos" << endl;

        InicializarMatriz(matrizFacultad_1);
        llenarMatriz(matrizFacultad_1);
        imprimirMatriz(matrizFacultad_1, alumnosFacultad);

        cout << "Ingrese 's' para repetir o cualquier otra tecla para salir: ";
        cin >> opcion;
        repetir = (opcion == 's' || opcion == 'S');

    } while (repetir);
}

int busquedaAleatoriaDeNotas(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

void InicializarMatriz(float matriz[ALUMNOS][NOTAS+1]) {
    for (int i = 0; i < ALUMNOS; i++) {
        for (int j = 0; j <= NOTAS; j++) {
            matriz[i][j] = 0.0;
        }
    }
}

void llenarMatriz(float matriz[ALUMNOS][NOTAS+1]) {
    for (int i = 0; i < ALUMNOS; i++) {
        float suma = 0;
        int calificacionAlumno = 0;

        for (int j = 0; j < NOTAS; j++) {
            if (j == 0) {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            } else if (j == 1) {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 25);
            } else if (j == 2) {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 35);
            } else if (j == 3) {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            }
            suma += static_cast<float>(calificacionAlumno);
            matriz[i][j] = static_cast<float>(calificacionAlumno);
        }
        matriz[i][NOTAS] = suma / NOTAS;
    }
}

void imprimirMatriz(float matriz[ALUMNOS][NOTAS+1], string nombreAlumnos[]) {
    cout << "Alumno\tParcial 1\tParcial 2\tExamen Final\tActividades\tPromedio" << endl;

    float promedioMayor = matriz[0][NOTAS];
    float promedioMenor = matriz[0][NOTAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;

    for (int i = 0; i < ALUMNOS; i++) {
        cout << nombreAlumnos[i] << "\t";
        for (int j = 0; j <= NOTAS; j++) {
            cout << matriz[i][j] << "\t\t";
        }
        cout << endl;
    }
}
