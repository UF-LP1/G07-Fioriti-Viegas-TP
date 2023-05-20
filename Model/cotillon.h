
#ifndef _COTILLON_H
#define _COTILLON_H

#include "articulos.h"
#include "articulos_cotillon.h"



class cotillon : public articulos {
public:

    cotillon(float precio, unsigned int stock, string marca, articulos_cotillon nombre);

    void set_codigo();

    string get_codigo();

    articulos_cotillon get_cotillon();

    void set_cotillon(articulos_cotillon cotillon);

    ~cotillon();
private:
    articulos_cotillon nombre;
};

#endif //_COTILLON_H