#ifndef _VAJILLA_DESCARTABLE_H
#define _VAJILLA_DESCARTABLE_H

#include "cumpleanios.h"
#include "vajilla.h"


class vajilla_descartable : public cumpleanios {
public:

    vajilla_descartable(float precio, unsigned int stock, tamanios tamanio, string color, string marca, vajilla nombre);

    void set_codigo();

    string get_codigo();

    vajilla get_vajilla();

    void set_vajilla(vajilla producto);

    ~vajilla_descartable();
private:
    vajilla producto;
};

#endif //_VAJILLA_DESCARTABLE_H
