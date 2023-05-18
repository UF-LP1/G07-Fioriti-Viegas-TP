
#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "trabajador.h"
#include "carrito.h"
#include "medio_de_pago.h"

class encargado : public trabajador {
public:

    void empaquetar(unsigned int cant_productos);

    encargado(string nombre, string apellido, string dni, float sueldo);

    void cobrar(carrito* productos, float* dinero);

    void envolver_regalo(carrito productos);

    void empaquetar_compra(unsigned int cant_productos);

    void entregar_bolsa();

    medio_de_pago tipoPago();

    ~encargado();
};

#endif //_ENCARGADO_H