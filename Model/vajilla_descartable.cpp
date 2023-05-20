#include "vajilla_descartable.h"


vajilla_descartable::vajilla_descartable(float precio, unsigned int stock, tamanios tamanio, string color, string marca, vajilla nombre) :cumpleanios(color, tamanio, precio, stock, marca)
{
}

void vajilla_descartable::set_codigo()
{
    srand(time(NULL));
    int aux = 601 + rand() % 700;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string vajilla_descartable::get_codigo()
{
    return this->codigo;
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
