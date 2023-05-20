#include "golosinas.h"

golosinas::golosinas(string marca, float precio, unsigned int stock, tipo_golosina nombre) :articulos(marca)
{
    this->precio = precio;
    this->stock = stock;
}

void golosinas::set_codigo()
{

    int aux = 301 + rand() % 400;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string golosinas::get_codigo()
{
    return this->codigo;
}

tipo_golosina golosinas::get_nombre()
{
    return this->nombre;
}


golosinas::~golosinas()
{
}
