
#include "articulos.h"


articulos::articulos(string marca):marca(marca) {
    this->precio = 0;
    this->stock = 0;
}


unsigned int articulos::get_precio() {
    return this->precio;
}

unsigned int articulos::get_stock() {
    return this->stock;
}

void articulos::set_precio(unsigned int precio) {
    cout << this->precio << " pesos" << endl;
    return;
}

void articulos::set_stock(unsigned int stock) {
    cout << this->stock << " unidades" << endl;
    return;
}

articulos::~articulos() {

}