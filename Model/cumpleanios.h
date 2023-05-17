
#ifndef _CUMPLEANIOS_H
#define _CUMPLEANIOS_H

#include "articulos.h"


class cumpleanios : public articulos {
public:

    cumpleanios(string color, string tamanio, float precio, unsigned int stock, string  marca,string nombre);

    ~cumpleanios();

    virtual void set_codigo() = 0;

    string get_color();

    string get_tamanio();
protected:
    string const color;
    string const tamanio;
};

#endif //_CUMPLEAÑOS_H