#ifndef _MANTELES_H
#define _MANTELES_H
#include "matel.h"
#include "cumpleanios.h"

class manteles : public cumpleanios {
public:

<<<<<<< HEAD
    manteles(float precio, unsigned int stock, string color, string tamanio, string marca);

    mantel get_decoracion();

    void set_decoracion(mantel decoracion);

    ~manteles();

private:

    mantel tipo_decoracion;
=======
    manteles(float precio, unsigned int stock, string color, string tamanio, string marca,string nombre);

    ~manteles();

>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
};

#endif //_MANTEL_DECORADO_H