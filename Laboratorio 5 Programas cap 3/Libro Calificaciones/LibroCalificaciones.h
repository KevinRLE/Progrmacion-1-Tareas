#ifndef LIBRO_CALIFICACIONES_H
#define LIBRO_CALIFICACIONES_H

#include <string>

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string);
    void establecerNombreCurso(std::string);
    std::string obtenerNombreCurso() const;
    void mostrarMensaje() const;

private:
    std::string nombreCurso;
};

#endif
