

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "persona.h"
#include "carrito.h"
#include "medio_de_pago.h"
#include "establecimiento.h"
#include "talles.h"
#include "disfraces.h"
#include "empleado.h"
#include "cumpleanios.h"
#include "encargado.h"
#include "golosinas.h"
#include "cotillon.h"
#include "reposteria.h"
#include "manteles.h"

class cliente : public persona {
public:

    cliente(string nombre, string apellido, string dni, string mail, string JPG);

    void pagar(float precio, encargado encargado);

    void solicitar_impresion();

    void agarrar_numero();

    void reservar_disfraz();

    articulo buscar_producto(empleado trabajador);

    void agregar_carrito(forward_list<articulos*> lista, empleado trabajador, articulo buscado);

    void set_medio_pago(medio_de_pago medio_pago);

    void set_dinero(float dinero);

    void set_disfraz(bool disfraz);

    void set_dias_alquilando(unsigned int dias);

    string get_mail();

    medio_de_pago get_medio_pago();

    unsigned int get_numero_orden();

    float get_cant_dinero();

    string get_JPG();

    bool get_disfraz();

    carrito get_carrito();

    unsigned int get_dias_alquilando();



    ~cliente();
private:
    unsigned int numero_orden;
    string const mail;
    medio_de_pago medio_pago;
    float cant_dinero;
    string const JPG;
    bool disfraz;
    unsigned int dias_alquilando;
    carrito miCarrito;
};

#endif //_CLIENTE_H
//auto buscarProductoCotillon(forward_list<articulos>& listaProductos, string nombre, string marca);