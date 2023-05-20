
#ifndef _CUMPLEANIOS_H
#define _CUMPLEANIOS_H

#include "articulos.h"

enum tamanios {chico,medio,grande};

class cumpleanios : public articulos {
public:

    cumpleanios(string color, tamanios tamanio, float precio, unsigned int stock, string  marca);

    ~cumpleanios();

    void set_codigo();

    string get_color();

    tamanios get_tamanio();
protected:
    string color;
    tamanios tamanio;
};

#endif //_CUMPLEAÑOS_H