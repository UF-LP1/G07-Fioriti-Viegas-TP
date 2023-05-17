#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "articulos.h"

class golosinas : public articulos {
public:

    golosinas(string marca, float precio, unsigned int stock,string nombre);

    void set_codigo();

    string get_codigo();
  
    ~golosinas();
};

#endif //_GOLOSINAS_H