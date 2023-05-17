
#include "reposteria.h"

reposteria::~reposteria() {

}

reposteria::reposteria(float precio, unsigned int stock, string marca,string nombre) :articulos(marca,nombre)
{
    this->precio = precio;
    this->stock = stock;
    /*this->tipo_decorado = ninguna;
    this->tipo_molde = ninguno;*/
}

void reposteria::set_codigo()
{
    srand(time(NULL));
    int aux = 501 + rand() % 600;
    string codigo = to_string(aux);
    this->codigo = codigo;
}

string reposteria::get_codigo()
{
    return this->codigo;
}
/*
molde reposteria::get_molde()
{
    return this->tipo_molde;
}

decoracion_repostera reposteria::get_repostera()
{
    return this->tipo_decorado;
}

void reposteria::set_molde(molde molde)
{
    this->tipo_molde = molde;
}

void reposteria::set_repostera(decoracion_repostera repostera)
{
    this->tipo_decorado = repostera;
}
*/