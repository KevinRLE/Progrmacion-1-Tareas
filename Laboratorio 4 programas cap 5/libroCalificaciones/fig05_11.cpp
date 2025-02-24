#include "LibroCalificaciones.h"

int main() {
    LibroCalificaciones miLibroCalificaciones("CS101 Programación en C++");

    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.recibirCalificaciones();
    miLibroCalificaciones.mostrarReporteCalificaciones();

    return 0;
}
