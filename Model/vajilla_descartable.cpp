#include "vajilla_descartable.h"


vajilla_descartable::vajilla_descartable(float precio, unsigned int stock, string tamanio, string color, string marca,string nombre) :cumpleanios(color, tamanio, precio, stock, marca,nombre)
{
}
/*
vajilla vajilla_descartable::get_vajilla()
{
    return this->producto;
}

void vajilla_descartable::set_vajilla(vajilla producto)
{
    this->producto = producto;
}
*/
vajilla_descartable::~vajilla_descartable()
{
}
