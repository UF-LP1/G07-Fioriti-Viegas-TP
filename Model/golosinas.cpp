#include "golosinas.h"

golosinas::golosinas(string marca, float precio, unsigned int stock,string nombre) :articulos(marca,nombre)
{
    this->precio = precio;
    this->stock = stock;
}


golosinas::~golosinas()
{
}
