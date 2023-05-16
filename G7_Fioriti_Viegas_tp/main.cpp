
//
//#include <iostream>
//#include <forward_list>
//#include <string>
#include "../Model/cotillon.h"
#include "../Model/cliente.h"
#include "../Model/disfraces.h"
#include "../Model/globos.h"
#include "../Model/golosinas.h"
#include "../Model/manteles.h"
#include "../Model/molde.h"
#include "../Model/reposteria.h"
#include "../Model/vajilla_descartable.h"
#include "../Model/vela.h"
#include "../Model/encargado.h"
#include "../Model/empleado.h"

using namespace std;

int main()  {
    
    cotillon producto(10.0, 20, "disfrazate", "mascara");
    cotillon producto1(14.5, 15, "papelito", "papel_picado");
    cotillon producto2(5.0, 30, "laLuz", "fluorescentes");
    cotillon producto3(2.3, 13, "espumin", "espuma");
    disfraces producto4(30.0,3, "disfrazate", "disfraz de batman", XS );
    globos producto5("amarillo", 20, 1.0, "chico", "bombucha", "globos");
    golosinas producto6("fellfort", 1.0, 50, "caramelo");
    manteles producto7(5.0, 5, "violeta", "10 m2", "mantelito", "mantel de cumpleaņos");
    reposteria producto8(3.0,45,"moldeate","molde de torta");
    reposteria producto9(5.0, 34, "moldeate", "chocolate");
    vajilla_descartable producto10(6.5, 34, "chiquito", "rojo", "tusVajillas", "vaso");
    forward_list<articulos> lista;
    lista.push_front(producto);
    lista.push_front(producto1);
    lista.push_front(producto2);
    lista.push_front(producto3);
    lista.push_front(producto4);
    lista.push_front(producto5);
    lista.push_front(producto6);
    lista.push_front(producto7);
    lista.push_front(producto8);
    lista.push_front(producto9);
    lista.push_front(producto10);
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
    /*cout << "Ingrese talle de ser necesario. Caso contrario, ingrese 0" << endl;
    getline(cin, talle);*/

    // Buscamos el producto deseado en la lista de productos
    pedro.agregar_carrito(lista, nombreBuscado, marcaBuscada, cantidadBuscada);

    encargado mariano("mariano", "bordeira", "446635760", 50);
    empleado martin("martin", "scorza", "467936533", 0.0);

    return 0;
}