#include "empleado.h"

empleado::empleado(string nombre, string apellido, string dni, float sueldo) : trabajador(nombre, apellido, dni) {
    this->sueldo = sueldo;
}

void empleado::llamar_cliente(unsigned int numero_orden)
{
    cout << "*empleado* Cliente: " << numero_orden << endl;
}

void empleado::atender_mostrador(string **nombre, string **marca, unsigned int **cant) {
    string nombreaux, marcaaux;
    unsigned int cantaux;
    cout << "*empleado* Que producto desea llevar?(nombre): " << endl;
    getline(cin, nombreaux);
    **nombre = *&nombreaux;
    cout << "*empleado* Que marca es la del producto?: " << endl;
    cin >> marcaaux;
    **marca = *&marcaaux;
    cout << "*empleado* Cuantos necesitas?: " << endl;
    cin >> cantaux;
    **cant = *&cantaux;
    return;
}

void empleado::paraCumpleanios(string **tamanio, string **color)
{
    string tamanioaux, coloraux;
    cout << "*empleado* Que tamanio desea llevar?(nombre) " << endl;
    cin >> tamanioaux;
    **tamanio = *&tamanioaux;
    cout << "*empleado* De que color quiere el producto? " << endl;
    cin >> coloraux;
    **color = *&coloraux;
    return;
}

void empleado::paraDisfraz(int** talle) {
    int talleaux;
    cout << "*empleado* Que talle queria?" << endl;
    cin >> talleaux;
    **talle = *&talleaux;
}

void empleado::terminar_interaccion()
{
    cout << "* empleado* Por favor, dirigase a la caja a que le cobren los productos. Adios!" << endl;
}

empleado::~empleado() {

}