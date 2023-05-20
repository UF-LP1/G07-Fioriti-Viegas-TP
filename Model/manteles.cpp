#include "manteles.h"

manteles::manteles(float precio, unsigned int stock, string color, string tamanio, string marcas,string nombre) :cumpleanios(color, tamanio, precio, stock, marcas,nombre)
{

}

void manteles::set_codigo()
{
    int aux = 401 + rand() % 500;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string manteles::get_codigo()
{
    return this->codigo;
}

manteles::~manteles()
{
}