#include "librerias.h"
#include "articulos.h"

#ifndef _ESTABLECIMIENTO_H
#define _ESTABLECIMIENTO_H

class establecimiento {
public:

    establecimiento(string nombre, string direccion, string horario_semana, string horario_sabado, string telefono);

    string get_direccion();

    string get_horario_semana();

    string get_horario_sabado();

    string get_nombre();

    string get_telefono();

    forward_list<articulos> get_productos();

    void set_productos(forward_list<articulos> productos);

    forward_list<articulos>::iterator buscar_articulo(string marca, string nombre);

    void eliminar_articulo(forward_list<articulos>::iterator eliminado);

    ~establecimiento();
private:
    string const nombre;
    string const direccion;
    string const horario_semana;
    string const horario_sabado;
    string const telefono;
    forward_list<articulos> productos;
};

#endif //_ESTABLECIMIENTO_H