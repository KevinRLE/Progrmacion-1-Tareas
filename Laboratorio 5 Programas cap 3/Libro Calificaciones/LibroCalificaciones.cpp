#include <iostream>
#include <string>

class LibroCalificaciones {
public:
    // Constructor con dos par�metros
    LibroCalificaciones(std::string nombreCurso, std::string nombreInstructor) {
        establecerNombreCurso(nombreCurso);
        establecerNombreInstructor(nombreInstructor);
    }

    void establecerNombreCurso(std::string nombre) {
        if (nombre.size() <= 25) {
            this->nombreCurso = nombre;
        } else {
            this->nombreCurso = nombre.substr(0, 25);
            std::cerr << "El nombre del curso excede la longitud m�xima (25). Se trunc�.\n";
        }
    }

    std::string obtenerNombreCurso() const {
        return nombreCurso;
    }

    void establecerNombreInstructor(std::string nombre) {
        this->nombreInstructor = nombre;
    }

    std::string obtenerNombreInstructor() const {
        return nombreInstructor;
    }

    void mostrarMensaje() const {
        std::cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!\n";
        std::cout << "Este curso es presentado por: " << obtenerNombreInstructor() << "\n";
    }

private:
    std::string nombreCurso;
    std::string nombreInstructor;
};

int main() {
    LibroCalificaciones libro("CS101 Programaci�n en C++", "Profesor Juan P�rez");
    libro.mostrarMensaje();
    return 0;
}
