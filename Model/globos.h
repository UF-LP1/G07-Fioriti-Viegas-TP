
#ifndef _GLOBOS_H
#define _GLOBOS_H

#include "cumpleanios.h"


class globos : public cumpleanios {
public:

    globos(string color, unsigned int stock, float precio, tamanios tamanio, string  marca);

    void set_codigo();

    string get_codigo();

    ~globos();
};

#endif //_GLOBOS_H