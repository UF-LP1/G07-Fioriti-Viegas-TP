#ifndef _MANTELES_H
#define _MANTELES_H
#include "matel.h"
#include "cumpleanios.h"

class manteles : public cumpleanios {
public:

    manteles(float precio, unsigned int stock, string color, string tamanio, string marca);

    mantel get_decoracion();

    void set_decoracion(mantel decoracion);

    ~manteles();

private:

    mantel tipo_decoracion;
};

#endif //_MANTEL_DECORADO_H