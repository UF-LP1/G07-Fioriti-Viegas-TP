#include "encargado.h"

encargado::encargado(string nombre, string apellido, string dni, float sueldo) :trabajador(nombre, apellido, dni) {
    this->sueldo = sueldo;
}

void encargado::cobrar(carrito* producto,float* dinero ) {
    cout << "Buenas, serian " << (*producto).get_monto() << "$ en total" << endl;
    if ((*producto).get_monto() < *dinero) {
        *dinero = *dinero - (*producto).get_monto();
        producto.
    }
    else {
        cout << "*encargado* No tiene saldo suficiente." << endl;
    }
    return;
}

void encargado::envolver_regalo(carrito producto) {
    return;
}

/**
 * @param cant_productos
 * @return void
 */
void encargado::empaquetar(unsigned int cant_productos) {
    return;
}

/**
 * @return void
 */
void encargado::entregar_bolsa() {
    return;
}

encargado::~encargado() {

}