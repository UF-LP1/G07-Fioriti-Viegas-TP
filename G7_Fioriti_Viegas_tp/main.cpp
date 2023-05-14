#include <iostream>
#include <forward_list>
#include <string>
#include "/Users/ffior/source/repos/G7_Fioriti_Viegas_tp/Model/cotillon.h"

using namespace std;

int main() {

    cotillon producto((float)10.0, 20, "disfrazate", mascara);
    forward_list<articulos> algo{
        {10.0, 20,"difrazate", "mascara"},
        {1.20, 5,"cotimillon", "papel_picado"},
        {15.0, 20,"espumin", "espuma"},
        {20.0, 10,"ilumina", "fluorecente"}
        //{"Confeti", "Confetitos", 0.80, 8}
    };
    
    forward_list<articulos> miCarrito;

    string nombreBuscado, marcaBuscada;
    int cantidadBuscada;

    cout << "Ingrese el nombre del producto que desea buscar: ";
    getline(cin, nombreBuscado);
    cout << "Ingrese la marca del producto que desea buscar: ";
    getline(cin, marcaBuscada);
    cout << "Ingrese la cantidad de productos que desea: ";
    cin >> cantidadBuscada;

    // Buscamos el producto deseado en la lista de productos
    auto itProducto = buscarProductoCotillon(listaProductos, nombreBuscado, marcaBuscada);

    // Si encontramos el producto y hay suficiente stock disponible
    if (itProducto != listaProductos.end()) {
        // Calculamos el precio total de los productos deseados
        float precioTotal = itProducto->getPrecio() * cantidadBuscada;

        // Agregamos los productos deseados a MiCarrito
        miCarrito.emplace_front(itProducto->getNombre(), itProducto->getMarca(), itProducto->getPrecio(), cantidadBuscada);

        // Reducimos el stock de la lista de productos principal
        itProducto->reducirStock(cantidadBuscada);

        cout << "Se agregaron " << cantidadBuscada << " productos al carrito por un precio total de $" << precioTotal << endl;
    }
    else {
        cout << "No se encontró el producto deseado o no hay suficiente stock disponible" << endl;
    }

    return 0;
}