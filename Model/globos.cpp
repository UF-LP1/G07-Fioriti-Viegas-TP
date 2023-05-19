#include "globos.h"

globos::globos(string color, unsigned int stock,float precio, string tamanio, string marca,string nombre) :cumpleanios(color, tamanio, precio, stock, marca,nombre) {

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