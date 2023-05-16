
#include "reposteria.h"

reposteria::~reposteria() {

}

reposteria::reposteria(float precio, unsigned int stock, string marca,string nombre) :articulos(marca,nombre)
{
    set_precio(precio);
    set_stock(stock);
    this->tipo_decorado = ninguna;
    this->tipo_molde = ninguno;
}

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
