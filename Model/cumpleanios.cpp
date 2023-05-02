#include "cumpleanios.h"

cumpleanios::cumpleanios(string color, string tamanio, unsigned int precio, unsigned int stock, string marca) :articulos(marca) {
    set_precio(precio);
    set_stock(stock);
    this->precio = precio;
    this->stock = stock;
}

cumpleanios::~cumpleanios() {

}

string cumpleanios::get_color() {
    return this->color;
}

string cumpleanios::get_tamanio() {
    return this->tamanio;
}