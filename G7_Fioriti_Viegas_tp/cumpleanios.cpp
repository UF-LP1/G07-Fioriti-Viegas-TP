#include "cumpleanios.h"

<<<<<<< HEAD
cumpleanios::cumpleanios(string color, string tamanio, float precio, unsigned int stock, string marca) :articulos(marca) {
=======
cumpleanios::cumpleanios(string color, string tamanio, float precio, unsigned int stock, string marca,string nombre) :articulos(marca,nombre) {
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
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