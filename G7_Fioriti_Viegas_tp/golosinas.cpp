#include "golosinas.h"

golosinas::golosinas(string marca, float precio, unsigned int stock) :articulos(marca)
{
    set_precio(precio);
    set_stock(stock);
}


golosinas::~golosinas()
{
}
