#include <iostream>
#include <forward_list>
#include <string>
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/cotillon.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/cliente.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/disfraces.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/globos.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/golosinas.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/manteles.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/molde.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/reposteria.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/vajilla_descartable.h"
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/G7_Fioriti_Viegas_tp/Model/vela.h"

using namespace std;

int main() {

    cotillon producto(10.0, 20, "disfrazate", mascara);
    cotillon producto1(14.5, 15, "papelito", papel_picado);
    cotillon producto2(5.0, 30, "laLuz", fluorescentes);
    cotillon producto3(2.3, 13, "espumin", espuma);
    disfraces producto4(30.0, 3, "disfrazate");
    globos producto5("amarillo", 20, 1.0, "chico", "bombucha");
    golosinas producto6("fellfort", 1.0, 50);
    manteles producto7(precio, stock, color, tamanio, marca);
    forward_list<articulos> lista;
    lista.push_front(producto);
    lista.push_front(producto1);
    lista.push_front(producto2);
    lista.push_front(producto3);
    cliente pedro("Pedro", "Marquez", "45428877", "marquezbest@gmail.com", "imagen.jpg");
    string nombreBuscado, marcaBuscada;
    int cantidadBuscada;

    cout << "Ingrese el nombre del producto que desea buscar: ";
    getline(cin, nombreBuscado);
    cout << "Ingrese la marca del producto que desea buscar: ";
    getline(cin, marcaBuscada);
    cout << "Ingrese la cantidad de productos que desea: ";
    cin >> cantidadBuscada;

    // Buscamos el producto deseado en la lista de productos
    pedro.agregar_carrito(lista, nombreBuscado, marcaBuscada, cantidadBuscada);

    return 0;
}