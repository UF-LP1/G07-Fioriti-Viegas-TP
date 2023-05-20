#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

enum articulo { cotillones, cumple, reposterias, disfraz, golosina, mantelito};

class articulos {
public:

    articulos(string marca,float precio, unsigned int stock);

    articulos(string marca);

    articulos();

    virtual void set_codigo() {};

    float get_precio();

    unsigned int get_stock();

    string get_marca();

    void set_precio(float precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    float precio;
    unsigned int stock;
     string marca;
     string codigo;
};
#endif //_ARTICULOS_H