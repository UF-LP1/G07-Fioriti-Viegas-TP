**
* Project Untitled
* /


#include "persona.h"


persona::persona(string nombre, string apellido, string dni) :nombre(nombre), apellido(apellido), dni(dni)
{
}

persona::~persona()
{
}

/**
 * @return nombre
 */
string persona::get_nombre() {
    return this->nombre;
}

/**
 * @return apellido
 */
string persona::get_apellido() {
    return this->apellido;
}

/**
 * @return dni
 */
string persona::get_dni() {
    return this->dni;
}