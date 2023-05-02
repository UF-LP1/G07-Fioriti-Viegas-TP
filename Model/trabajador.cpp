/**
 * Project Untitled
 */


#include "trabajador.h"

 /**
  * @return sueldo
  */
trabajador::trabajador(string nombre, string apellido, string dni) :persona(nombre, apellido, dni)
{
    this->sueldo = 0;
}
trabajador::~trabajador()
{
}
unsigned int trabajador::get_sueldo() {
    return this->sueldo;
}

/**
 * @param sueldo
 * @return void
 */
void trabajador::set_sueldo(unsigned int sueldo) {
    this->sueldo = sueldo;
    return;
}