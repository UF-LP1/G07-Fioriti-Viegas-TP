
#ifndef _CUMPLEAÑOS_H
#define _CUMPLEAÑOS_H

#include "articulos.h"


class cumpleanios : public articulos {
public:

<<<<<<< HEAD
    cumpleanios(string color, string tamanio, float precio, unsigned int stock, string  marca);
=======
    cumpleanios(string color, string tamanio, float precio, unsigned int stock, string  marca,string nombre);
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e

    ~cumpleanios();

    string get_color();

    string get_tamanio();
protected:
    string const color;
    string const tamanio;
};

#endif //_CUMPLEAÑOS_H