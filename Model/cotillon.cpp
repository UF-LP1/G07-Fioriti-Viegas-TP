#include "cotillon.h"

cotillon::cotillon(float precio, unsigned int stock, string marca,string nombre): articulos(marca,nombre) {
    this->precio=precio;
    this->stock = stock;
}

void cotillon::set_codigo()
{
    srand(time(NULL));
    int aux = 1 + rand() % 100;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string cotillon::get_codigo()
{
    return this->codigo;
}

cotillon::~cotillon() {

}