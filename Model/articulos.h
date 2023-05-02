#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class articulos {
public:

    articulos(string marca);

    articulos();

    unsigned int get_precio();

    unsigned int get_stock();

    string get_marca();

    void set_precio(unsigned int precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    unsigned int precio;
    unsigned int stock;
    const string marca;

};
#endif //_ARTICULOS_H