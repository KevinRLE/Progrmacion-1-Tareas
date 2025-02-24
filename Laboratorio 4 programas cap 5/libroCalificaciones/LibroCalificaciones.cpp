#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(string nombre)
    : aCuenta(0), bCuenta(0), cCuenta(0), dCuenta(0), fCuenta(0) {
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre) {
    if (nombre.size() <= 25) {
        nombreCurso = nombre;
    } else {
        nombreCurso = nombre.substr(0, 25);
        cerr << "El nombre \"" << nombre << "\" excede la longitud máxima (25).\n"
             << "Se limitó nombreCurso a los primeros 25 caracteres.\n" << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const {
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificaciones::recibirCalificaciones() {
    char calificacion;
    cout << "Escriba las calificaciones de letra (A-F). Presione Ctrl+D para terminar (en Windows, Ctrl+Z + Enter)." << endl;

    while (cin >> calificacion) {
        switch (calificacion) {
            case 'A': case 'a': ++aCuenta; break;
            case 'B': case 'b': ++bCuenta; break;
            case 'C': case 'c': ++cCuenta; break;
            case 'D': case 'd': ++dCuenta; break;
            case 'F': case 'f': ++fCuenta; break;
            default:
                cout << "Se introdujo una letra incorrecta. Intente nuevamente." << endl;
        }
    }
}

void LibroCalificaciones::mostrarReporteCalificaciones() const {
    cout << "\nResumen de calificaciones:"
         << "\nA: " << aCuenta
         << "\nB: " << bCuenta
         << "\nC: " << cCuenta
         << "\nD: " << dCuenta
         << "\nF: " << fCuenta
         << endl;
}
