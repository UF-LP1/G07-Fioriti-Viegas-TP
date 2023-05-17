#include "cotillon.h"

cotillon::cotillon(float precio, unsigned int stock, string marca,string nombre): articulos(marca,nombre) {
    this->precio=precio;
    this->stock = stock;
}

cotillon::~cotillon() {

}