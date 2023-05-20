#ifndef _VELA_H
#define _VELA_H

#include "cumpleanios.h"


class vela : public cumpleanios {
public:

    vela(tamanios tamanio, float precio, unsigned int stock, string color,string marca);

    void set_codigo();

    string get_codigo();

    ~vela();

};

#endif //_VELA_H