#include "cotillon.h"

cotillon::cotillon(float precio, unsigned int stock, string marca,string nombre): articulos(marca,nombre) {
    set_precio(precio);
    set_stock(stock);
}

cotillon::~cotillon() {

}