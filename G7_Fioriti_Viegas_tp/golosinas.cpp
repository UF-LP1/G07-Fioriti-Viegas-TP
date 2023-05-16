#include "golosinas.h"

<<<<<<< HEAD
golosinas::golosinas(string marca, float precio, unsigned int stock) :articulos(marca)
=======
golosinas::golosinas(string marca, float precio, unsigned int stock,string nombre) :articulos(marca,nombre)
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
{
    set_precio(precio);
    set_stock(stock);
}


golosinas::~golosinas()
{
}
