#include "cotillon.h"

cotillon::cotillon(float precio, unsigned int stock, string marca, articulos_cotillon nombre): articulos(marca) {
    this->precio=precio;
    this->stock = stock;
}

void cotillon::set_codigo()
{
   
    int aux = 1 + rand() % 100;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string cotillon::get_codigo()
{
    return this->codigo;
}

articulos_cotillon cotillon::get_cotillon() {
    return this->nombre;
}

void cotillon::set_cotillon(articulos_cotillon cotillon)
{
    this->nombre = cotillon;
}

cotillon::~cotillon() {

}