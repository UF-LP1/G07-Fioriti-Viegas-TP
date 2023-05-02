

#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include "persona.h"


class trabajador : public persona {
public:
    trabajador(string nombre, string apellido, string dni);

    ~trabajador();

    unsigned int get_sueldo();

    void set_sueldo(unsigned int sueldo);
protected:
    unsigned int sueldo;
};

#endif //_TRABAJADOR_H