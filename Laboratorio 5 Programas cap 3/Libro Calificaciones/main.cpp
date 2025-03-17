#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en C++");
    LibroCalificaciones libroCalificaciones2("CS102 C++: Estruc de datos");

    // Mensaje de bienvenida
    libroCalificaciones1.mostrarMensaje();
    libroCalificaciones2.mostrarMensaje();

    cout << "\nEl nombre inicial del curso de libroCalificaciones1 es: "
         << libroCalificaciones1.obtenerNombreCurso()
         << "\nEl nombre inicial del curso de libroCalificaciones2 es: "
         << libroCalificaciones2.obtenerNombreCurso() << endl;

    libroCalificaciones1.establecerNombreCurso("CS101 Programacion en C++");

    cout << "\nEl nombre del curso de libroCalificaciones1 es: "
         << libroCalificaciones1.obtenerNombreCurso()
         << "\nEl nombre del curso de libroCalificaciones2 es: "
         << libroCalificaciones2.obtenerNombreCurso() << endl;

    return 0;
}
