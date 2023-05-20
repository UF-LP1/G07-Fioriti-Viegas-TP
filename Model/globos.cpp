#include "globos.h"

globos::globos(string color, unsigned int stock, float precio, tamanios tamanio, string marca) :cumpleanios(color, tamanio, precio, stock, marca) {

}

void globos::set_codigo()
{
  
    int aux = 201 + rand() % 300;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string globos::get_codigo()
{
    return this->codigo;
}

globos::~globos() {

}