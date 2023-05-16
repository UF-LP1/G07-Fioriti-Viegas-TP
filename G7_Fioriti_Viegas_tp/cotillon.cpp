#include "cotillon.h"

cotillon::cotillon(float precio, unsigned int stock, string marca, articulos_cotillon cotillon,string nombre): articulos(marca,nombre) {
    set_precio(precio);
    set_stock(stock);
    this->articulo = cotillon;
}

void cotillon::set_cotillon(articulos_cotillon cotillon)
{
    this->articulo = cotillon;
}

articulos_cotillon cotillon::get_cotillon()
{
    return this->articulo;
}


cotillon::~cotillon() {

}