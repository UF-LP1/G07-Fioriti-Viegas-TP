
#ifndef _COTILLON_H
#define _COTILLON_H

#include "articulos.h"
#include "articulos_cotillon.h"



class cotillon : public articulos {
public:

    cotillon(unsigned int precio, unsigned int stock, string marca);

    void set_cotillon(articulos_cotillon cotillon);

    articulos_cotillon get_cotillon();

    ~cotillon();
private:
    articulos_cotillon articulos;
};

#endif //_COTILLON_H