/**
 * Project Untitled
 */


#include "golosinas.h"

 /**
  * golosinas implementation
  */



golosinas::golosinas(string marca, unsigned int precio, unsigned int stock) :articulos(marca)
{
    set_precio(precio);
    set_stock(stock);
}


golosinas::~golosinas()
{
}
