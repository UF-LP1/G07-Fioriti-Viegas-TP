#include "golosinas.h"

golosinas::golosinas(string marca, float precio, unsigned int stock,string nombre) :articulos(marca,nombre)
{
    this->precio = precio;
    this->stock = stock;
}

void golosinas::set_codigo()
{
    srand(time(NULL));
    int aux = 301 + rand() % 400;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string golosinas::get_codigo()
{
    return this->codigo;
}


golosinas::~golosinas()
{
}
