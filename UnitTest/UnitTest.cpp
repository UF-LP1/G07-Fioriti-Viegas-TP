#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/ffior/source/repos/Model/cliente.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(Agregar_carrito)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			forward_list<articulos> productos;

			articulos cuchillo("Tramontina");
			cuchillo.set_precio(1000);
			cuchillo.set_stock(15);

			articulos globos("Fiesta");
			globos.set_precio(300);
			globos.set_stock(20);

			articulos disfraz_de_batman("Disfrazate");
			disfraz_de_batman.set_precio(700);
			disfraz_de_batman.set_stock(2);

			articulos chocolate("Felfort");
			chocolate.set_precio(500);
			chocolate.set_stock(500);

			articulos mantel_liso("Mantelin");
			mantel_liso.set_precio(600);
			mantel_liso.set_stock(10);

			productos.push_front(cuchillo);
			productos.push_front(globos);
			productos.push_front(disfraz_de_batman);
			productos.push_front(chocolate);
			productos.push_front(mantel_liso);


		}
	};
}
