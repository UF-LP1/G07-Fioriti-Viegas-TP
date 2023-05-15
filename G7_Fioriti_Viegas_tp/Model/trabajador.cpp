/**
 * Project Untitled
 */


#include "trabajador.h"

trabajador::trabajador(string nombre, string apellido, string dni) :persona(nombre, apellido, dni)
{
    this->sueldo = 0;
}
trabajador::~trabajador()
{
}
float trabajador::get_sueldo() {
    return this->sueldo;
}

void trabajador::set_sueldo(float sueldo) {
    this->sueldo = sueldo;
    return;
}