#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones {
public:
    explicit LibroCalificaciones(string nombre);
    void establecerNombreCurso(string nombre);
    string obtenerNombreCurso() const;
    void mostrarMensaje() const;
    void recibirCalificaciones();
    void mostrarReporteCalificaciones() const;

private:
    string nombreCurso;
    int aCuenta, bCuenta, cCuenta, dCuenta, fCuenta;
};

#endif // LIBROCALIFICACIONES_H
