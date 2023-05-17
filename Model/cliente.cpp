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
    float aux = 0.0;
    if (this->miCarrito.get_monto() < this->cant_dinero)
        aux = this->cant_dinero - this->miCarrito.get_monto();
    else
        cout << "No tiene saldo suficiente." << endl;
    return aux;
}

void cliente::solicitar_impresion() {
    return;
}

void cliente::agarrar_numero() {
    srand(time(NULL));
    this->numero_orden = 1+rand();
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
void cliente::agregar_carrito(forward_list<articulos> lista)
{
    string nombreBuscado, marcaBuscada;
    unsigned int cantidadBuscada;
    cout << "*empelado* Ingrese el nombre del producto que desea buscar: " << endl;
    getline(cin, nombreBuscado);
    cout << "*empleado* Ingrese la marca del producto que desea buscar: " << endl;
    getline(cin, marcaBuscada);
    cout << "*empleado* Ingrese la cantidad de productos que desea: " << endl;
    cin >> cantidadBuscada;
    for (forward_list<articulos>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        if(it->get_marca() == nombreBuscado && it->get_nombre() == nombre)
        if (it->get_stock() >= cantidadBuscada)
        { //determino el resto de caracteristicas

            it->set_stock(it->get_stock() - cantidadBuscada);//cambio el stock de la lista
            articulos aux = *it;//creo el auxiliar de articulos que va a sumarse al carrito
            aux.set_stock(cantidadBuscada);//le seteo la cantidad que va a tener en carrito

            this->miCarrito.set_monto((it->get_precio() * cantidadBuscada) + this->miCarrito.get_monto());//cambio el valor del monto total del carrito
            this->miCarrito.set_cant(this->miCarrito.get_cant() + cantidadBuscada);//cambio la cantidad de productos de carrito
            std::forward_list<articulos>* aux2 = this->miCarrito.get_productos();
            aux2->push_front(aux);//agrego el nuevo producto a carrito

            cout << "Se agregaron " << cantidadBuscada << " productos al carrito por un precio total de $" << it->get_precio() * cantidadBuscada << endl;
            return;
        }
        else
            cout << "*empleado* Solo tenemos " << it->get_stock() << " de los " << cantidadBuscada << " que usted pidio."
    }
    cout << "*empleado* No tenemos ese producto en venta en este momento." << endl;

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