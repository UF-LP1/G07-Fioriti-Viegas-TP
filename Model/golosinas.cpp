#include "golosinas.h"

golosinas::golosinas(string marca, float precio, unsigned int stock,string nombre) :articulos(marca,nombre)
{
    set_precio(precio);
    set_stock(stock);
}


golosinas::~golosinas()
{
}
