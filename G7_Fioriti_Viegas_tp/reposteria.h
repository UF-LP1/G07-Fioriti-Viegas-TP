
#ifndef _REPOSTERIA_H
#define _REPOSTERIA_H

#include "articulos.h"
#include "molde.h"
#include "decoracion_repostera.h"

class reposteria : public articulos {
public:

<<<<<<< HEAD
    reposteria(float precio, unsigned int stock, string marca);

    molde get_molde();

    decoracion_repostera get_repostera();

    void set_molde(molde molde);

    void set_repostera(decoracion_repostera repostera);
=======
    reposteria(float precio, unsigned int stock, string marca,string nombre);
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e

    ~reposteria();

private:
    molde tipo_molde;
    decoracion_repostera tipo_decorado;
};

#endif //_REPOSTERIA_H