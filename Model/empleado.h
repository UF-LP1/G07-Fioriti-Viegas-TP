
#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajador.h"


class empleado : public trabajador {
public:

    empleado(string nombre, string apellido, string dni, float sueldo);

    void llamar_cliente(unsigned int numero_orden);

    void atender_mostrador();

    ~empleado();
};

#endif //_EMPLEADO_H