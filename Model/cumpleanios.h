
#ifndef _CUMPLEAÑOS_H
#define _CUMPLEAÑOS_H

#include "articulos.h"


class cumpleanios : public articulos {
public:

    cumpleanios(string color, string tamanio, unsigned int precio, unsigned int stock, string  marca);

    ~cumpleanios();

    string get_color();

    string get_tamanio();
protected:
    string const color;
    string const tamanio;
};

#endif //_CUMPLEAÑOS_H