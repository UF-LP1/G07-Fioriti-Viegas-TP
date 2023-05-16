#include "disfraces.h"

<<<<<<< HEAD
disfraces::disfraces(float precio, unsigned int stock, string marca) :articulos(marca) {
	set_precio(precio);
	set_stock(stock);
}

talles disfraces::get_talles()
=======
disfraces::disfraces(float precio, unsigned int stock, string marca, string nombre, string talle) :articulos(marca, nombre) {
	set_precio(precio);
	set_stock(stock);
	this->talle = talle;
}

string disfraces::get_talles()
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
{
	return this->talle;
}

<<<<<<< HEAD
void disfraces::set_talle(talles talle) {
=======
void disfraces::set_talle(string talle) {
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
	this->talle = talle;
}

disfraces::~disfraces() {

}