#include "disfraces.h"

disfraces::disfraces(float precio, unsigned int stock, string marca) :articulos(marca) {
	set_precio(precio);
	set_stock(stock);
}

talles disfraces::get_talles()
{
	return this->talle;
}

void disfraces::set_talle(talles talle) {
	this->talle = talle;
}

disfraces::~disfraces() {

}