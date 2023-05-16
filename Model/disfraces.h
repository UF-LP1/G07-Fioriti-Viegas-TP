#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "articulos.h"
#include "talles.h"


class disfraces : public articulos {
public:

    disfraces(float precio, unsigned int stock, string marca,string nombre,talles talle);

    string get_talles();

    void set_talle(string talle);

    ~disfraces();
private:
    string talle;
};

#endif //_DISFRACES_H