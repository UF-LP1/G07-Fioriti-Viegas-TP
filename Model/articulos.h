#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class articulos {
public:

    articulos(string marca,string nombre,float precio, unsigned int stock);

    articulos(string marca, string nombre);

    articulos();

    float get_precio();

    string get_nombre();

    unsigned int get_stock();

    string get_marca();

    void set_precio(float precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    float precio;
    unsigned int stock;
     string marca;
     string nombre;
};
#endif //_ARTICULOS_H