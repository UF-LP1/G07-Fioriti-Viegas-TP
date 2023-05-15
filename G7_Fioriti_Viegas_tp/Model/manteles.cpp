#include "manteles.h"

manteles::manteles(float precio, unsigned int stock, string color, string tamanio, string marcas) :cumpleanios(color, tamanio, precio, stock, marcas)
{
    this->tipo_decoracion = liso;
}

mantel manteles::get_decoracion()
{
    return this->tipo_decoracion;
}

void manteles::set_decoracion(mantel decoracion)
{
    this->tipo_decoracion = decoracion;
}

manteles::~manteles()
{
}