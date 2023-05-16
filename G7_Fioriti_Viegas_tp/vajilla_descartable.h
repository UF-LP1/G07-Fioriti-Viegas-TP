#ifndef _VAJILLA_DESCARTABLE_H
#define _VAJILLA_DESCARTABLE_H

#include "cumpleanios.h"
#include "vajilla.h"


class vajilla_descartable : public cumpleanios {
public:

<<<<<<< HEAD
    vajilla_descartable(float precio, unsigned int stock, string tamaño, string color, string marca);

    vajilla get_vajilla() ;

    void set_vajilla(vajilla producto);
=======
    vajilla_descartable(float precio, unsigned int stock, string tamaño, string color, string marca,string nombre);
>>>>>>> 215c0f292602bf673ce52840c4ce21bca95f9d5e

    ~vajilla_descartable();
private:
    vajilla producto;
};

#endif //_VAJILLA_DESCARTABLE_H