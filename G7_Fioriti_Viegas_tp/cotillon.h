
#ifndef _COTILLON_H
#define _COTILLON_H

#include "articulos.h"
<<<<<<< HEAD
#include "articulos_cotillon.h"
=======
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e



class cotillon : public articulos {
public:

<<<<<<< HEAD
    cotillon(float precio, unsigned int stock, string marca, articulos_cotillon cotillon);

    void set_cotillon(articulos_cotillon cotillon);

    articulos_cotillon get_cotillon();

    ~cotillon();
private:
    articulos_cotillon articulo;
=======
    cotillon(float precio, unsigned int stock, string marca, string nombre);

    ~cotillon();
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e
};

#endif //_COTILLON_H