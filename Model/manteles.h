#ifndef _MANTELES_H
#define _MANTELES_H
#include "matel.h"
#include "cumpleanios.h"

class manteles : public cumpleanios {
public:

    manteles(float precio, unsigned int stock, string color, tamanios tamanio, string marca, mantel tipo);

    void set_codigo();

    string get_codigo();

    ~manteles();
private:
    mantel tipo;
};

#endif //_MANTEL_DECORADO_H