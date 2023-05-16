

#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include "persona.h"


class trabajador : public persona {
public:
    trabajador(string nombre, string apellido, string dni);

    ~trabajador();

    float get_sueldo();

    void set_sueldo(float sueldo);
protected:
    float sueldo;
};

#endif //_TRABAJADOR_H