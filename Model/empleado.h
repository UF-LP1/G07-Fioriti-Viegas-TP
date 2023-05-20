
#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajador.h"
#include "articulos.h"

class empleado : public trabajador {
public:

    empleado(string nombre, string apellido, string dni, float sueldo);

    void llamar_cliente(unsigned int numero_orden);

    void atender_mostrador(string **marca, unsigned int **cant);

    articulo tipo_producto();

    void paraCumpleanios(int **tamanio, string **color);

    void paraDisfraz(int** talle);

    void terminar_interaccion();

    ~empleado();

    void paraManteles(int** tipo);

    void paraReposteria(int** decoracion, int** molde);

    void paraCotillon(int** cotillon);

};

#endif //_EMPLEADO_H