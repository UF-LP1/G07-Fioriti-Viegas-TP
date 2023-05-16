#include "disfraces.h"

disfraces::disfraces(float precio, unsigned int stock, string marca, string nombre, string talle) :articulos(marca, nombre) {
	set_precio(precio);
	set_stock(stock);
	this->talle = talle;
}

string disfraces::get_talles()
{
	return this->talle;
}

void disfraces::set_talle(string talle) {
	this->talle = talle;
}

disfraces::~disfraces() {

}