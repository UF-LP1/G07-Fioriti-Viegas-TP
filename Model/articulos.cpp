
#include "articulos.h"


articulos::articulos(string marca,string nombre,float precio, unsigned int stock) /* :marca(marca), nombre(nombre)*/ {
    this->precio =precio;
    this->stock =stock;
    this->nombre = nombre;
    this->marca = marca;
}
articulos::articulos(string marca, string nombre) {
    this->precio = 0.0;
    this->stock = 0;
    this->marca = marca;
    this->nombre = nombre;
}
articulos::articulos():marca(""),nombre("")
{
    this->precio = 0.0;
    this->stock = 0;
}

float articulos::get_precio() {
    return this->precio;
}

string articulos::get_nombre()
{
    return this->nombre;
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