#include "vajilla_descartable.h"


<<<<<<< HEAD
vajilla_descartable::vajilla_descartable(float precio, unsigned int stock, string tamaño, string color, string marca) :cumpleanios(color, tamanio, precio, stock, marca)
=======
vajilla_descartable::vajilla_descartable(float precio, unsigned int stock, string tamaño, string color, string marca,string nombre) :cumpleanios(color, tamanio, precio, stock, marca,nombre)
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
{
    this->producto;
}

vajilla vajilla_descartable::get_vajilla()
{
    return this->producto;
}

void vajilla_descartable::set_vajilla(vajilla producto)
{
    this->producto = producto;
}

vajilla_descartable::~vajilla_descartable()
{
}
