#include <iostream>
#include <forward_list>
#include <string>
#include "G7_Fioriti_Viegas_tp/Model/articulos.cpp"
#include "Model/cliente.h"
#include "Model/disfraces.h"
#include "Model/globos.h"
#include "Model/golosinas.h"
#include "Model/manteles.h"
#include "Model/molde.h"
#include "Model/reposteria.h"
#include "Model/vajilla_descartable.h"
#include "Model/vela.h"

using namespace std;

int main() {

    cotillon producto(10.0, 20, "disfrazate", mascara);
    cotillon producto1(14.5, 15, "papelito", papel_picado);
    cotillon producto2(5.0, 30, "laLuz", fluorescentes);
    cotillon producto3(2.3, 13, "espumin", espuma);
    disfraces producto4(30.0, 3, "disfrazate");
    globos producto5("amarillo", 20, 1.0, "chico", "bombucha");
    golosinas producto6("fellfort", 1.0, 50);
    manteles producto7(5.0, 5, "violeta", "10 m2", "mantelito");
    molde producto8;
    forward_list<articulos> lista;
    lista.push_front(producto);
    lista.push_front(producto1); 
    lista.push_front(producto2); 
    lista.push_front(producto3); 
    cliente pedro("Pedro", "Marquez", "45428877", "marquezbest@gmail.com", "imagen.jpg");
    string nombreBuscado, marcaBuscada;
    int cantidadBuscada;
    string talle;

    cout << "Ingrese el nombre del producto que desea buscar: " << endl;
    getline(cin, nombreBuscado);
    cout << "Ingrese la marca del producto que desea buscar: " << endl;
    getline(cin, marcaBuscada);
    cout << "Ingrese la cantidad de productos que desea: " << endl;
    cin >> cantidadBuscada;
    cout << "Ingrese talle de ser necesario. Caso contrario, ingrese 0" << endl;
    getline(cin, talle);

    // Buscamos el producto deseado en la lista de productos
    pedro.agregar_carrito(lista, nombreBuscado, marcaBuscada, cantidadBuscada, talle);

    return 0;
}