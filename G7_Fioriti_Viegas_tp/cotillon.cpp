#include "cotillon.h"

<<<<<<< HEAD
cotillon::cotillon(float precio, unsigned int stock, string marca, articulos_cotillon cotillon) :articulos(marca) {
=======
cotillon::cotillon(float precio, unsigned int stock, string marca, articulos_cotillon cotillon,string nombre): articulos(marca,nombre) {
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
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