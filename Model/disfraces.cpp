#include "disfraces.h"

disfraces::disfraces(float precio, unsigned int stock, string marca, string nombre, talles talle) :articulos(marca, nombre) {

	this->precio = precio;
	this->stock = stock;
	this->talle = talle;
}

void disfraces::set_codigo()
{
	
	int aux = 101 + rand() % 200;
	string codigo = to_string(aux);
	this->codigo = codigo;
}

string disfraces::get_codigo()
{
	return this->codigo;
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