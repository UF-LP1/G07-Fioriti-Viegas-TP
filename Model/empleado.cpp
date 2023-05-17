#include "empleado.h"

empleado::empleado(string nombre, string apellido, string dni, float sueldo) : trabajador(nombre, apellido, dni) {
    this->sueldo = sueldo;
}

void empleado::llamar_cliente(unsigned int numero_orden)
{
    cout << "*Empleado* Cliente: " << numero_orden << endl;
}

void empleado::atender_mostrador(string **nombre, string **marca, unsigned int **cant) {
    string nombreaux, marcaaux;
    unsigned int cantaux;
    cout << "*empleado* Que producto desea llevar?(nombre): " << endl;
    getchar();
    getline(cin, nombreaux);
    *nombre = &nombreaux;
    cout << "*empleado* Que marca es la del producto?: " << endl;
    getline(cin, marcaaux);
    *marca = &marcaaux;
    cout << "*empleado* Cuantos necesitas?: " << endl;
    cin >> cantaux;
    *cant = &cantaux;
    return;
}

void empleado::terminar_interaccion()
{
    cout << "Por favor, dirigase a la caja a que le cobren los productos. Adios!" << endl;
}

empleado::~empleado() {

}