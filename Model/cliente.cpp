#include "cliente.h"

cliente::cliente(string nombre, string apellido, string dni, string mail, string JPG) : persona(nombre, apellido, dni), mail(mail), JPG(JPG) {
    carrito* micarrito = new carrito(); //hacer constructor por defecto en carrito
    this->cant_dinero = 0;
    this->disfraz = false;
    this->dias_alquilando = 0;
    this->medio_pago = efectivo;
    this->numero_orden = 0;
}

unsigned int cliente::pagar(unsigned int precio) { //cosultar la relacion entre encargado y cliente, metodos de pagar y cobrar
    unsigned int aux = precio;
    return aux;
}

void cliente::solicitar_impresion() {
    return;
}

void cliente::agarrar_numero(unsigned int numero) {
    this->numero_orden = numero;
    return;
}

void cliente::reservar_disfraz() { //preguntar
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
void cliente::agregar_carrito(forward_list<articulos> lista, articulos nombre, string marca, unsigned int cant)
{
    int contador = 0;
    while (contador != cant) {
        forward_list<articulos>::iterator it = find_if(lista.begin(), lista.end(), nombre);
        if ((*it).get_marca() == marca) {
            contador++;
            (*it).set_stock((*it).get_stock() - 1);
            if (contador == cant || it == lista.end() || (*it).get_stock() == 0) {
                this->miCarrito.set_productos((*it));
                this->miCarrito.set_cant(contador);
                this->miCarrito.set_monto((*it).get_precio() * contador);
            }
            if ((*it).get_stock() == 0) {
                lista.remove((*it));
                break;
            }
        }
    }
    return;
}

void cliente::set_medio_pago(medio_de_pago medio_pago) {
    this->medio_pago = medio_pago;
    return;
}

void cliente::set_dinero(unsigned int dinero) {
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

unsigned int cliente::get_cant_dinero() {
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