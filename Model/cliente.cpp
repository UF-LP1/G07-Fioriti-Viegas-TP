#include "cliente.h"

cliente::cliente(string nombre, string apellido, string dni, string mail, string JPG) : persona(nombre, apellido, dni), mail(mail), JPG(JPG) {
    this->miCarrito.set_cant(0);
    this->miCarrito.set_monto(0);
    //forward_list<articulos> productos;
    //this->miCarrito.set_productos(productos); No esta definido para forward list
    this->cant_dinero = 0;
    this->disfraz = false;
    this->dias_alquilando = 0;
    this->medio_pago = efectivo;
    this->numero_orden = 0;
}

float cliente::pagar(float precio) { //cosultar la relacion entre encargado y cliente, metodos de pagar y cobrar
    float aux;
    if (this->miCarrito.get_monto() < this->cant_dinero)
        aux = this->cant_dinero - this->miCarrito.get_monto();
    else
        cout << "No tiene saldo suficiente." << endl;
    return aux;
}

void cliente::solicitar_impresion() {
    return;
}

void cliente::agarrar_numero(unsigned int numero) {
    this->numero_orden = numero;
    return;
}

void cliente::reservar_disfraz() {//preguntar
    
    return;
}

/*
* Este metodo permite agregar la cantidad de articulos de un tipo de marca en especifico al carrito del respectivo cliente
*
* @param lista  Es la lista donde se encuentran los articulos a buscar
* @param nombre Es el nombre del producto que se desea agregar
* @param marca Es la marca del producto que se desea
* @param cant Es la cantidad de productos que se desean
*/
void cliente::agregar_carrito(forward_list<articulos> lista, string nombre, string marca, unsigned int cant)
{
    for (forward_list<articulos>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        if (it->get_marca() == marca && it->get_stock() >= cant && it->get_nombre() == nombre)
        { //determino el resto de caracteristicas

            it->set_stock(it->get_stock() - cant);//cambio el stock de la lista
            articulos aux = *it;//creo el auxiliar de articulos que va a sumarse al carrito
            aux.set_stock(cant);//le seteo la cantidad que va a tener en carrito

            this->miCarrito.set_monto((it->get_precio() * cant) + this->miCarrito.get_monto());//cambio el valor del monto total del carrito
            this->miCarrito.set_cant(this->miCarrito.get_cant() + cant);//cambio la cantidad de productos de carrito
            std::forward_list<articulos>* aux2 = this->miCarrito.get_productos();
            aux2->push_front(aux);//agrego el nuevo producto a carrito

            cout << "Se agregaron " << cant << " productos al carrito por un precio total de $" << it->get_precio() * cant << endl;
            return;
        }
    }
    cout << "No hay suficiente stock." << endl;

 }


void cliente::set_medio_pago(medio_de_pago medio_pago) {
    this->medio_pago = medio_pago;
    return;
}

void cliente::set_dinero(float dinero) {
    this->cant_dinero = dinero;
    return;
}

void cliente::set_disfraz(bool disfraz) {
    this->disfraz = disfraz;
    return;
}

void cliente::set_dias_alquilando(unsigned int dias) {
    this->dias_alquilando = dias;
    return;
}

string cliente::get_mail() {
    return this->mail;
}

medio_de_pago cliente::get_medio_pago() {
    return this->medio_pago;
}

unsigned int cliente::get_numero_orden() {
    return this->numero_orden;
}

float cliente::get_cant_dinero() {
    return this->cant_dinero;
}

string cliente::get_JPG() {
    return this->JPG;
}

bool cliente::get_disfraz() {
    return this->disfraz;
}

carrito cliente::get_carrito()
{
    return this->miCarrito;
}

unsigned int cliente::get_dias_alquilando() {
    return this->dias_alquilando;
}

cliente::~cliente() {
}
/*
auto buscarProductoCotillon(forward_list<articulos>& listaProductos, string nombre, string marca)
{
    auto it = find_if(listaProductos.begin(), listaProductos.end(), nombre);
         if (it->get_marca() == marca && it->get_stock() > 0) {
                return it;
        }
        return listaProductos.end();
}
*/