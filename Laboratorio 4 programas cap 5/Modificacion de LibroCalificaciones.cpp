// Fig. 5.10: LibroCalificaciones.cpp
// Definiciones de las funciones miembro para la clase LibroCalificaciones que
// utiliza una instrucci�n switch para contar calificaciones A, B, C, D y F.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definici�n de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con la cadena suministrada como
// argumento; inicializa los miembros de datos contadores a 0
LibroCalificaciones::LibroCalificaciones( string nombre )
: aCuenta( 0 ), // inicializa cuenta de calificaciones A con 0
  bCuenta( 0 ), // inicializa cuenta de calificaciones B con 0
  cCuenta( 0 ), // inicializa cuenta de calificaciones C con 0
  dCuenta( 0 ), // inicializa cuenta de calificaciones D con 0
  fCuenta( 0 ) // inicializa cuenta de calificaciones F con 0
{
    establecerNombreCurso( nombre );
} // fin del constructor de LibroCalificaciones

// funci�n para establecer el nombre del curso; limita el nombre a 25 caracteres o menos
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    if ( nombre.size() <= 25 ) // si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // almacena el nombre del curso en el objeto
    else // si el nombre es mayor que 25 caracteres
    { // establece nombreCurso a los primeros 25 caracteres del par�metro nombre
        nombreCurso = nombre.substr( 0, 25 ); // selecciona los primeros 25 caracteres
        cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
             << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    } // fin de if...else
} // fin de la funci�n establecerNombreCurso

// funci�n para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
} // fin de la funci�n obtenerNombreCurso

// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // esta instrucci�n llama a obtenerNombreCurso para obtener el
    // nombre del curso que representa este LibroCalificaciones
    cout << "Bienvenido al libro de calificaciones para\n"
         << obtenerNombreCurso() << "!\n" << endl;
} // fin de la funci�n mostrarMensaje

// recibe un n�mero arbitrario de calificaciones del usuario; actualiza el contador de calificaciones
void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion; // calificacion introducida por el usuario

    cout << "Escriba las calificaciones de letra." << endl
         << "Escriba el caracter EOF para terminar la entrada." << endl;

    // itera hasta que el usuario escriba la secuencia de fin de archivo
    while ( ( calificacion = cin.get() ) != EOF )
    {
        // determina cu�l calificaci�n se introdujo
        switch ( calificacion ) // instrucci�n switch anidada en el while
        {
            case 'A': // calificacion fue A may�scula
            case 'a': // o a min�scula
                ++aCuenta; // incrementa aCuenta
                break; // es necesario salir del switch

            case 'B': // calificacion fue B may�scula
            case 'b': // o b min�scula
                ++bCuenta; // incrementa bCuenta
                break; // sale del switch

            case 'C': // calificacion fue C may�scula
            case 'c': // o c min�scula
                ++cCuenta; // incrementa cCuenta
                break; // sale del switch

            case 'D': // calificacion fue D may�scula
            case 'd': // o d min�scula
                ++dCuenta; // incrementa dCuenta
                break; // sale del switch

            case 'F': // calificacion fue F may�scula
            case 'f': // o f min�scula
                ++fCuenta; // incrementa fCuenta
                break; // sale del switch

            case '\n': // ignora caracteres de nueva l�nea,
            case '\t': // tabuladores,
            case ' ': // y espacios en la entrada
                break; // sale del switch

            default: // atrapa todos los dem�s caracteres
                cout << "Se introdujo una letra de calificacion incorrecta."
                     << " Escriba una nueva calificaci�n." << endl;
                break; // opcional; saldr� del switch de todas formas
        } // fin de switch
    } // fin de while
} // fin de la funci�n recibirCalificaciones

// muestra un reporte con base en las calificaciones introducidas por el usuario
void LibroCalificaciones::mostrarReporteCalificaciones() const
{
    // imprime resumen de resultados
    cout << "\n\nNumero de estudiantes que recibieron cada calificacion de letra:"
         << "\nA: " << aCuenta // muestra el n�mero de calificaciones A
         << "\nB: " << bCuenta // muestra el n�mero de calificaciones B
         << "\nC: " << cCuenta // muestra el n�mero de calificaciones C
         << "\nD: " << dCuenta // muestra el n�mero de calificaciones D
         << "\nF: " << fCuenta // muestra el n�mero de calificaciones F
         << endl;
} // fin de la funci�n mostrarReporteCalificaciones
