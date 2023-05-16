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

<<<<<<< HEAD
    void set_producto(articulos productos);
=======
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e

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