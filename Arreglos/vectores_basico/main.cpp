//solucion del programa

#include <iostream>
#include <stdlib.h>

//cambio de posicion de declaraciones
//Declaraciòn de Constantes
#define NUMEROALUMNOS 5
#define NUMEROMATERIAS 5
#define NUMERONOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100

using namespace std;
//Declaraciòn de Prototipos de Funciòn
void LlamarCiclo();
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1],char alumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA]); //se agregó parámero alumnos
int busquedaAleatoriaDeNotas(int minimo, int maximo);


int main()
{
    LlamarCiclo();
    return 0;
}
void LlamarCiclo()
{
    float matrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir=true;

    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;

    char alumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA]={"Carlos", "Luis", "Maria", "Pedro", "Mario"};
    //Agrego condicion a do while, sino loop infinito
    do
    {
        promedioFacultad_1=0;
        promedioFacultad_2=0;
        promedioFacultad_3=0;

        cout << "* Comparativo de Facultades *" <<endl;

        InicializarMatriz(matrizFacultad_1);
        InicializarMatriz(matrizFacultad_2);
        InicializarMatriz(matrizFacultad_3);

        LlenarMatriz(matrizFacultad_1);
        LlenarMatriz(matrizFacultad_2);
        LlenarMatriz(matrizFacultad_3);

        promedioFacultad_1 = imprimirMatriz(matrizFacultad_1, alumnosFacultad);

        cout << "apretar n para salir ";
        cin >> opcion;
        repetir = (opcion == 's' || opcion == 'S');

    } while (repetir);

}
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite inicializar la matriz de calculos
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        for(j=0; j<NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            matriz[i][j]= 0.00;
        }
    }
}
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite calcular aleatoriamente las notas de cada alumno en la matriz
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        float suma=0;
        int calificacionAlumno=0;
        for(j=0; j<NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            if (j==0 || j==3) //primer parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            }
            else if (j==1) //segundo parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 25);
            }
            else if (j==2) //examen final
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 35);
            }
            suma+=(float)calificacionAlumno;
            matriz[i][j] = (float)calificacionAlumno;
            calificacionAlumno=0;
        }
        float promedioAlumno = suma / NUMERONOTAS;  // Agrego de promedio de notas
        matriz[i][NUMERONOTAS] = promedioAlumno;
    }
}
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1], char alumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA])
{
    //Cambio de variables i y j
        int i,j;
        float promerioMayor=matriz[0][NUMERONOTAS];
        float promedioMenor=matriz[0][NUMERONOTAS];
        float totalGeneral=0;
        float promedioGeneral=0;
    //Cambio codigos de otra librería a tabulaciones
        cout << "(nota1)=>Primer Parcial (Nota2)=>Segundo Parcial (Nota3)=>Final (Nota4=>Actividades" << endl;
        cout << "Alumno\t\t1er Parcial\t2do Parcial\tExamen Final\tActividades\tTotal" << endl;
    //Cambio total en el for, para proyectar las notas y nombres de alumnos
        for (i = 0; i < NUMEROALUMNOS; i++){
                cout << alumnosFacultad[i] << "\t\t";
            for (j = 0; j < NUMERONOTAS; j++){
                cout << matriz[i][j] << "\t\t";
            }
            cout << matriz[i][NUMERONOTAS] << endl;
        }

    return promedioGeneral;
}

int busquedaAleatoriaDeNotas(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo-minimo+1)+1);
}
