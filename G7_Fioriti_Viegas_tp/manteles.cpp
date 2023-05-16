#include "manteles.h"

<<<<<<< HEAD
manteles::manteles(float precio, unsigned int stock, string color, string tamanio, string marcas) :cumpleanios(color, tamanio, precio, stock, marcas)
=======
manteles::manteles(float precio, unsigned int stock, string color, string tamanio, string marcas,string nombre) :cumpleanios(color, tamanio, precio, stock, marcas,nombre)
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
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