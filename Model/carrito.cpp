
#include "carrito.h"

carrito::carrito(float monto_total, forward_list<articulos> producto, unsigned int cant_productos) {
    this->monto_total = monto_total;
    //this->productos = producto; No esta definido para forward list
    this->cant_productos = cant_productos;
}

carrito::carrito() {
    this->monto_total = 0.0;
    articulos* productos = new articulos();
    this->cant_productos = 0;
}

carrito::~carrito() {

}

void carrito::set_monto(float monto)
{
    this->monto_total;
}
/*
void carrito::set_productos(forward_list<articulos> productos)
{
    this->productos;
}
*/
void carrito::set_cant(unsigned int cant_productos)
{
    this->cant_productos;
}

float carrito::get_monto() {
    return this->monto_total;
}

forward_list<articulos> *carrito::get_productos() {
    return &this->productos;
}

unsigned int carrito::get_cant() {
    return this->cant_productos;
}