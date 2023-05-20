
#ifndef _GLOBOS_H
#define _GLOBOS_H

#include "cumpleanios.h"


class globos : public cumpleanios {
public:

    globos(string color, unsigned int stock, float precio, string tamanio, string  marca,string nombre);

    void set_codigo();

    string get_codigo();

    ~globos();
};

#endif //_GLOBOS_H