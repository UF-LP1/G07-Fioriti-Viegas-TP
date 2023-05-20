
#include "articulos.h"


articulos::articulos(string marca,float precio, unsigned int stock) /* :marca(marca), nombre(nombre)*/ {
    this->precio =precio;
    this->stock = stock;
    this->marca = marca;
}
articulos::articulos(string marca) {
    this->precio = 0.0;
    this->stock = 0;
    this->marca = marca;
}
articulos::articulos():marca("")
{
    this->precio = 0.0;
    this->stock = 0;
}

float articulos::get_precio() {
    return this->precio;
}

unsigned int articulos::get_stock() {
    return this->stock;
}

string articulos::get_marca()
{
    return this->marca;
}


void articulos::set_precio(float precio) {
    this->precio;
    return;
}

void articulos::set_stock(unsigned int stock) {
    this->stock;
    return;
}

articulos::~articulos() {

}