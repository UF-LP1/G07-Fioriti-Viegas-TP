
#ifndef _REPOSTERIA_H
#define _REPOSTERIA_H

#include "articulos.h"
#include "molde.h"
#include "decoracion_repostera.h"

class reposteria : public articulos {
public:

    reposteria(float precio, unsigned int stock, string marca,molde molde, decoracion_repostera decoracion);

    void set_codigo();

    string get_codigo();

    molde get_molde();

    decoracion_repostera get_repostera();

    void set_molde(molde molde);

    void set_repostera(decoracion_repostera repostera);

    ~reposteria();

private:
    molde tipo_molde;
    decoracion_repostera tipo_decorado;
};

#endif //_REPOSTERIA_H

