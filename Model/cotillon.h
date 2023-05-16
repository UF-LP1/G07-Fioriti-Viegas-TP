
#ifndef _COTILLON_H
#define _COTILLON_H

#include "articulos.h"



class cotillon : public articulos {
public:

    cotillon(float precio, unsigned int stock, string marca, string nombre);

    ~cotillon();
};

#endif //_COTILLON_H