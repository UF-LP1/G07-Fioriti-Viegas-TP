
#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "trabajador.h"
#include "carrito.h"

class encargado : public trabajador {
public:

    void empaquetar(unsigned int cant_productos);

    encargado(string nombre, string apellido, string dni, float sueldo);

    float cobrar(carrito productos);

    void envolver_regalo(carrito productos);

    void empaquetar_compra(unsigned int cant_productos);

    void entregar_bolsa();

    ~encargado();
};

#endif //_ENCARGADO_H