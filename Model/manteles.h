#ifndef _MANTELES_H
#define _MANTELES_H
#include "matel.h"
#include "cumpleanios.h"

class manteles : public cumpleanios {
public:

    manteles(float precio, unsigned int stock, string color, string tamanio, string marca,string nombre);

    ~manteles();

};

#endif //_MANTEL_DECORADO_H