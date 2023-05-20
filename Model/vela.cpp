
#include "vela.h"



vela::~vela() {

}

void vela::set_codigo()
{
    int aux = 701 + rand() % 800;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string vela::get_codigo()
{
    return this->codigo;
}

vela::vela(tamanios tamanio, float precio, unsigned int stock, string color, string marca) :cumpleanios(color, tamanio, precio, stock, marca) 
{
}
