#include <iostream>
#include <string>
using namespace std;

class Factura {
private:
    string numeroPieza;
    string descripcionPieza;
    int cantidad;
    int precioPorArticulo;

public:
    // Constructor que inicializa y valida los valores
    Factura(string num, string desc, int cant, int precio)
    {
        establecerNumeroPieza(num);
        establecerDescripcionPieza(desc);
        establecerCantidad(cant);
        establecerPrecioPorArticulo(precio);
    }

    // Funciones establecer
    void establecerNumeroPieza(string num) {
        numeroPieza = num;
    }

    void establecerDescripcionPieza(string desc) {
        descripcionPieza = desc;
    }

    void establecerCantidad(int cant) {
        cantidad = (cant <= 0) ? 0 : cant; // Valida cantidad
    }

    void establecerPrecioPorArticulo(int precio) {
        precioPorArticulo = (precio <= 0) ? 0 : precio; // Valida precio
    }

    // Funciones obtener
    string obtenerNumeroPieza() const {
        return numeroPieza;
    }

    string obtenerDescripcionPieza() const {
        return descripcionPieza;
    }

    int obtenerCantidad() const {
        return cantidad;
    }

    int obtenerPrecioPorArticulo() const {
        return precioPorArticulo;
    }

    // Calcula el monto de la factura
    int obtenerMontoFactura() const {
        return cantidad * precioPorArticulo;
    }
};

int main() {
    // Caso 1: Valores normales
    Factura factura1("A-123", "Taladro inalambrico", 3, 25900);
    cout << "Factura 1 - Monto: Q" << factura1.obtenerMontoFactura() << endl;

    // Caso 2: Cantidad negativa
    Factura factura2("B-456", "Sierra circular", 2, 15400);
    cout << "Factura 2 - Cantidad ajustada: " << factura2.obtenerCantidad()
         << ", Monto: Q" << factura2.obtenerMontoFactura() << endl;

    // Caso 3: Precio negativo
    Factura factura3("C-789", "Llave ajustable", 5, 8750);
    cout << "Factura 3 - Precio ajustado: " << factura3.obtenerPrecioPorArticulo()
         << ", Monto: Q" << factura3.obtenerMontoFactura() << endl;

    // Caso 4: Modificación de valores
    Factura factura4("D-012", "Destornillador", 0, 3250);
    factura4.establecerCantidad(4);
    factura4.establecerPrecioPorArticulo(2800);
    cout << "\nFactura 4 actualizada:"
         << "\nCantidad: " << factura4.obtenerCantidad()
         << "\nPrecio: " << factura4.obtenerPrecioPorArticulo()
         << "\nNuevo monto: Q" << factura4.obtenerMontoFactura() << endl;

    return 0;
}
