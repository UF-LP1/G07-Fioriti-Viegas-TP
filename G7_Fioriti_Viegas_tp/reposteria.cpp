
#include "reposteria.h"

reposteria::~reposteria() {

}

<<<<<<< HEAD
reposteria::reposteria(float precio, unsigned int stock, string marca) :articulos(marca)
=======
reposteria::reposteria(float precio, unsigned int stock, string marca,string nombre) :articulos(marca,nombre)
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
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
