#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "articulos.h"

class golosinas : public articulos {
public:

    golosinas(string marca, unsigned int precio, unsigned int stock);

    ~golosinas();
};

#endif //_GOLOSINAS_H