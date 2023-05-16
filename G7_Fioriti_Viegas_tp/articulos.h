#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class articulos {
public:

<<<<<<< HEAD
    articulos(string marca);
=======
    articulos(string marca,string nombre);
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e

    articulos();

    float get_precio();

<<<<<<< HEAD
=======
    string get_nombre();

>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
    unsigned int get_stock();

    string get_marca();

    void set_precio(float precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    float precio;
    unsigned int stock;
    const string marca;
<<<<<<< HEAD

=======
    const string nombre;
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
};
#endif //_ARTICULOS_H