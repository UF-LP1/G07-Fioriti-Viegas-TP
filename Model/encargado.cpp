#include "encargado.h"

encargado::encargado(string nombre, string apellido, string dni, unsigned int sueldo) :trabajador(nombre, apellido, dni) {
    set_sueldo(sueldo);
}

unsigned int encargado::cobrar(carrito producto) {
    unsigned int vuelto;
    return vuelto;
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