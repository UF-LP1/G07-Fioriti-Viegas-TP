
#ifndef _REPOSTERIA_H
#define _REPOSTERIA_H

#include "articulos.h"
#include "molde.h"
#include "decoracion_repostera.h"

class reposteria : public articulos {
public:

    reposteria(float precio, unsigned int stock, string marca,string nombre);

    ~reposteria();

private:
    /*
    molde tipo_molde;
    decoracion_repostera tipo_decorado;*/
};

#endif //_REPOSTERIA_H