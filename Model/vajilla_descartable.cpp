#include "vajilla_descartable.h"


vajilla_descartable::vajilla_descartable(unsigned int precio, unsigned int stock, string tamaño, string color, string marca) :cumpleanios(color, tamanio, precio, stock, marca)
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
