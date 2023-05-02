#include "librerias.h"
#include "articulos.h"
#ifndef _CARRITO_H
#define _CARRITO_H

class carrito {
public:

    carrito(unsigned int monto_total, forward_list<articulos> productos, unsigned int cant_productos);

    carrito();

    ~carrito();

    void set_monto(unsigned int monto);

    void set_productos(forward_list<articulos> productos);

    void set_productos(articulos productos);

    void set_cant(unsigned int cant_productos);

    unsigned int get_monto();

    forward_list<articulos> get_productos();

    unsigned int get_cant();
private:
    unsigned int monto_total;
    forward_list<articulos> productos;
    unsigned int cant_productos;
};

#endif //_CARRITO_H