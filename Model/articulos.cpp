
#include "articulos.h"


articulos::articulos(string marca,string nombre) :marca(marca),nombre(nombre) {
    this->precio = 0.0;
    this->stock = 0;
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
    cout << this->stock << " unidades" << endl;
    return;
}

articulos::~articulos() {

}