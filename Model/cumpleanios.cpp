#include "cumpleanios.h"

cumpleanios::cumpleanios(string color, tamanios tamanio, float precio, unsigned int stock, string marca) :articulos(marca) {
    this->precio = precio;
    this->stock = stock;
}

cumpleanios::~cumpleanios() {

}

void cumpleanios::set_codigo()
{
}


string cumpleanios::get_color() {
    return this->color;
}

tamanios cumpleanios::get_tamanio() {
    return this->tamanio;
}