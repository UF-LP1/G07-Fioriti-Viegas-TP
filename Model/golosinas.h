#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "articulos.h"

enum tipo_golosina {caramelo, chupetin, chocolate, gomita};

class golosinas : public articulos {
public:

    golosinas(string marca, float precio, unsigned int stock,tipo_golosina nombre);

    void set_codigo();

    string get_codigo();

    tipo_golosina get_nombre();
  
    ~golosinas();
private:
    tipo_golosina nombre;
};

#endif //_GOLOSINAS_H