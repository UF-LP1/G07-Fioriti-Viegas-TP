#include "cotillon.h"

cotillon::cotillon(unsigned int precio, unsigned int stock, string marca) :articulos(marca) {
    set_precio(precio);
    set_stock(stock);
}

void cotillon::set_cotillon(articulos_cotillon cotillon)
{
    this->articulos = cotillon;
}

articulos_cotillon cotillon::get_cotillon()
{
    return this->articulos;
}


cotillon::~cotillon() {

}