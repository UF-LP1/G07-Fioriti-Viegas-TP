#include "librerias.h"
#ifndef _PERSONA_H
#define _PERSONA_H


class persona {
public:

    persona(string nombre, string apellido, string dni);

    ~persona();

    string get_nombre();

    string get_apellido();

    string get_dni();
protected:
    string const nombre;
    string const apellido;
    string const dni;
};

#endif //_PERSONA_H