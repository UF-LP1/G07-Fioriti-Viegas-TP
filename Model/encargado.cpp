#include "encargado.h"

encargado::encargado(string nombre, string apellido, string dni, float sueldo) :trabajador(nombre, apellido, dni) {
    this->sueldo = sueldo;
}

float encargado::cobrar(carrito producto) {
    float vuelto = 0.0;
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