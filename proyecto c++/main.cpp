#include <iostream>
#include "Control.h"
//#include "MenuPersonas.h"

/*----------------------------------------------------------+
 * (c) 2025                                                 |
 * EIF204 - Programación 2                                  |
 * 1er ciclo 2025											|
 *                                                          |
 * Proyecto I                                               |
 *                                                          |
 * 1.Estudiante: 40269-0022; Chavarria Villalobos, Jose     |
 * 2.Estudiante: 11802-0323; Fernandez Fernandez, Adrian    |
 * 3.Estudiante: 40269-0022; Zamora Cruz, Erick             |                                          
 * versión 1.0.0 2025-05-31                                 |
 *----------------------------------------------------------+
*/


int main(const int, char* []) {
	/*	int opcion;*/
	
	/*do
	{
	*/
	
	try {
		Control* controlAplicacion = new Control();
		controlAplicacion->mostrarMenuPrincipal();
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	//cout << "Desea salir del programa. (1.Continuar,2.Salir)" << endl;
	//cin >> opcion;
	//cin.get();
	//} while (opcion == 1);
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