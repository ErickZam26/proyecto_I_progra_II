#include <iostream>
#include "Control.h"
//#include "MenuPersonas.h"


int main(const int, char* []) {

	try {
		Control* controlAplicacion = new Control();
		controlAplicacion->mostrarMenuPrincipal();
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	cin.get();

	return 0;
}







































//
//{
//    Colaborador* colab = new Colaborador("Jose", "402710170", "Programador", 100000);
//    Colaborador* colab1 = new Colaborador("Erick", "11111111", "Programador", 200000);
//    NodoColaborador* nodo = new NodoColaborador(colab);
//    ListaColaboradores* lista = new ListaColaboradores();
//    Archivos* arch = new Archivos();
//    adminArch* save = new adminArch();
//
//    save->cargar(arch, lista);
//
//    if (lista->getInicio() == NULL) {
//        cout << "agregando un colaborador" << endl;
//        lista->agregar(colab);
//    }
//
//
//
//    cout<<lista->verLista();
//
//    save->guardar(arch, lista);
//
//}