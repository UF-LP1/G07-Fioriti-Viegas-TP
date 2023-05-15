
#ifndef _COTILLON_H
#define _COTILLON_H

#include "articulos.h"
#include "articulos_cotillon.h"



class cotillon : public articulos {
public:

    cotillon(float precio, unsigned int stock, string marca, articulos_cotillon cotillon);

    void set_cotillon(articulos_cotillon cotillon);

    articulos_cotillon get_cotillon();

    ~cotillon();
private:
    articulos_cotillon articulo;
};

#endif //_COTILLON_H