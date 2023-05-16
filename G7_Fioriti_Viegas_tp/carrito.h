#include "librerias.h"
#include "articulos.h"
#ifndef _CARRITO_H
#define _CARRITO_H

class carrito {
public:

    carrito(float monto_total, forward_list<articulos> productos, unsigned int cant_productos);

    carrito();

    ~carrito();

    void set_monto(float monto);

    void set_productos(forward_list<articulos> productos);

    void set_producto(articulos productos);

    void set_cant(unsigned int cant_productos);

    float get_monto();

    forward_list<articulos> get_productos();

    unsigned int get_cant();
private:
    float monto_total;
    forward_list<articulos> productos;
    unsigned int cant_productos;
};

#endif //_CARRITO_H