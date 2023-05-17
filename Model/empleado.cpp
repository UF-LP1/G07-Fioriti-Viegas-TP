#include "empleado.h"

empleado::empleado(string nombre, string apellido, string dni, float sueldo) : trabajador(nombre, apellido, dni) {
    this->sueldo = sueldo;
}

void empleado::llamar_cliente(unsigned int numero_orden)
{
    cout << "cliente: " << numero_orden << endl;
}

void empleado::atender_mostrador() {
    return;
}

empleado::~empleado() {

}