
#include "vela.h"



vela::~vela() {

}

void vela::set_codigo()
{
    srand(time(NULL));
    int aux = 701 + rand() % 800;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string vela::get_codigo()
{
    return this->codigo;
}

vela::vela(string tamanio, float precio, unsigned int stock, string color,string marca,string nombre):cumpleanios(color, tamanio, precio, stock, marca,nombre)
{
}
