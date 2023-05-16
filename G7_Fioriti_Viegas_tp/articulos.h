#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class articulos {
public:

    articulos(string marca);

    articulos();

    float get_precio();

    unsigned int get_stock();

    string get_marca();

    void set_precio(float precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    float precio;
    unsigned int stock;
    const string marca;

};
#endif //_ARTICULOS_H