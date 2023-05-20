#include "manteles.h"

manteles::manteles(float precio, unsigned int stock, string color, tamanios tamanio, string marcas, mantel nombre) :cumpleanios(color, tamanio, precio, stock, marcas)
{
    this->tipo = nombre;
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

mantel manteles::get_tipo()
{
    return this->tipo; 
}

manteles::~manteles()
{
}