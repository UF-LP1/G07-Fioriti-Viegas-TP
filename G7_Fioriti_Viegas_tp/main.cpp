
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
#include "../Model/establecimiento.h"


using namespace std;

int main()  {
    srand(time(NULL));
    establecimiento lugar("Don Manolo", "Av. Cabildo 3093", "De lunes a viernes de 9:00 AM a 17:00 PM", "Sabados de 8:00 AM a 14:00 PM", "54 9 236 434-6284");
    cotillon producto(10.0, 20, "disfrazate", mascara);
    cotillon producto1(14.5, 15, "papelito", papel_picado);
    cotillon producto2(5.0, 30, "laLuz", fluorescentes);
    cotillon producto3(2.3, 13, "espumin", espuma);
    disfraces producto4(30.0,3, "disfrazate", "disfraz de batman", XS);
    globos producto5("amarillo", 20, 1.0, chico, "bombucha");
    golosinas producto6("fellfort", 1.0, 50, caramelo);
    manteles producto7(5.0, 5, "violeta", medio , "mantelito", superheroes);
    reposteria producto8(3.0, 45 , "moldeate" , cupcakes, chocolates);
    reposteria producto9(5.0, 34, "moldeate", pan_dulce, grana);
    vajilla_descartable producto10(6.5, 34, grande, "rojo", "tusVajillas", vaso);
    forward_list<articulos*> lista;
    lista.push_front(&producto);
    lista.push_front(&producto1);
    lista.push_front(&producto2);
    lista.push_front(&producto3);
    lista.push_front(&producto4);
    lista.push_front(&producto5);
    lista.push_front(&producto6);
    lista.push_front(&producto7);
    lista.push_front(&producto8);
    lista.push_front(&producto9);
    lista.push_front(&producto10);
    cliente buta("Bautista", "Rach", "457893394", "butaneta10@gmail.com", "imagen.jpg");
    empleado martin("Martin", "Scorza", "46738264", 0.0);
    encargado fede("Federico Pascual", "Fioriti", "45428877", 100.0);
    buta.agarrar_numero();
    martin.llamar_cliente(buta.get_numero_orden());
    string condicion;
    bool ganas = true;
    while (ganas) {
        buta.agregar_carrito(lista, martin, disfraz);
        system("cls");
        cout << "*Pensamiento interior de " << buta.get_nombre() << "*" << endl;
        cout << "Tengo ganas de algo mas?" << endl;
        cin >> condicion;
        if (condicion == "no" || condicion == "No" || condicion == "NO")
            ganas = false; system("cls");
    }
    system("cls");
    martin.terminar_interaccion();

    //fede.cobrar(buta.get_carrito()); 

    return 0;
}