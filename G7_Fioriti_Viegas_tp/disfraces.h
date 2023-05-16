#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "articulos.h"
#include "talles.h"


class disfraces : public articulos {
public:

<<<<<<< HEAD
    disfraces(float precio, unsigned int stock, string marca);

    talles get_talles();

    void set_talle(talles talle);

    ~disfraces();
private:
    talles talle;
=======
    disfraces(float precio, unsigned int stock, string marca,string nombre,string talle);

    string get_talles();

    void set_talle(string talle);

    ~disfraces();
private:
    string talle;
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
};

#endif //_DISFRACES_H