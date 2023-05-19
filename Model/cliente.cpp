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

void cliente::pagar(float precio, encargado encargado) { //cosultar la relacion entre encargado y cliente, metodos de pagar y cobra
    if (this->miCarrito.get_monto() < this->cant_dinero) {
        this->cant_dinero = this->cant_dinero - this->miCarrito.get_monto();

    }
        else {
            cout << "*encargado* No tiene saldo suficiente." << endl;
        }
    return;
}

void cliente::solicitar_impresion() {
    return;
}

void cliente::agarrar_numero() {
    srand(time(NULL));
    this->numero_orden = 1+rand()%100;
    return;
}

void cliente::reservar_disfraz() {//preguntar
    
    return;
}

/*
* Este metodo permite agregar la cantidad de articulos de un tipo de marca en especifico al carrito del respectivo cliente
*
* @param lista  Es la lista donde se encuentran los articulos a buscar
* @param trabajador Es el empleado que va a atender al cliente
*/
void cliente::agregar_carrito(forward_list<articulos>* lista, empleado trabajador)
{
    //declaro las variables auxiliares principales para comparar
    string* nombreBuscado = new string;
    string* marcaBuscada = new string;
    unsigned int *cantidadBuscada = new unsigned int;
    trabajador.atender_mostrador(&nombreBuscado, &marcaBuscada, &cantidadBuscada);//paso los punteros para devolver lo que el cliente busca
    for (forward_list<articulos>::iterator it = (*lista).begin(); it != (*lista).end(); it++)//recorro la lista con el iterador
    {
        if (it->get_marca() == *marcaBuscada && it->get_nombre() == *nombreBuscado)//condicion necesaria para ubicar el objeto
        {
            articulos aux = *it;//paso el contenido del iterador a un auxiliar
            //repito el proceso de cumpleanios en disfraces
            disfraces* disfraz = dynamic_cast<disfraces*>(&aux);
            if(/*dynamic_cast<disfraces*>(&*it)*/disfraz != nullptr) {
                string* talleBuscado = new string;
                trabajador.paraDisfraz(&talleBuscado);
                if (/*dynamic_cast<disfraces*>(&*it)*/disfraz->get_talles() != *talleBuscado)
                    cout << "No tenemos ese difraz en concreto." << endl;
                delete talleBuscado;
            }
            cumpleanios* cumple = dynamic_cast<cumpleanios*>(&aux);//me fijo si es de tipo cumpleanios
            if (/*dynamic_cast<cumpleanios*>(&*it)*/cumple != nullptr) {//si no lo es, entra a la condicion
                string* tamanioBuscado = new string;
                string* colorBuscado = new string;
                trabajador.paraCumpleanios(&tamanioBuscado, &colorBuscado);//mismo que en atender_mostrador
                if (/*dynamic_cast<cumpleanios*>(&*it)*/cumple->get_color() != *colorBuscado || /*dynamic_cast<cumpleanios*>(&*it)*/cumple->get_tamanio() != *tamanioBuscado) //me fijo si cumple con lo que pide el cliente
                    std::cout << "No tenemos ese producto en especifico." << endl;
                //deleteo los punteros ya que no me sirven mas
                delete tamanioBuscado;
                delete colorBuscado;
            }
            if (it->get_stock() >= *cantidadBuscada)//Si supero las demas condiciones, me fijo si queda stock
            { 

                it->set_stock(it->get_stock() - *cantidadBuscada);//cambio el stock de la lista
                (*it).set_stock(*cantidadBuscada);//le seteo la cantidad que va a tener en carrito
             
                this->miCarrito.set_monto((it->get_precio() * *cantidadBuscada) + this->miCarrito.get_monto());//cambio el valor del monto total del carrito
                this->miCarrito.set_cant(this->miCarrito.get_cant() + *cantidadBuscada);//cambio la cantidad de productos de carrito
                forward_list<articulos>* aux2 = this->miCarrito.get_productos();
                aux2->push_front((aux));//agrego el nuevo producto a carrito

                cout << "*empleado* Se agregaron " << *cantidadBuscada << " productos al carrito por un precio total de $" << it->get_precio() * *cantidadBuscada << endl;
                delete nombreBuscado;
                delete marcaBuscada;
                delete cantidadBuscada;
                //delete aux;
                return;
            }
            else {
                cout << "*empleado* Solo tenemos " << it->get_stock() << " de los " << *cantidadBuscada << " que usted pidio." << endl;
                delete nombreBuscado;
                delete marcaBuscada;
                delete cantidadBuscada;
                //delete aux;
                return;
            }
        }
    }
    std::cout << "*empleado* No tenemos ese producto en venta en este momento." << endl;
    delete nombreBuscado;
    delete marcaBuscada;
    delete cantidadBuscada;
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