#include "SubmenuDeducciones.h"

SubmenuDeducciones::SubmenuDeducciones(Control* _gestor) : consola() {
	gestor = _gestor;
	setTitulo("GESTION DE DEDUCCIONES");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

	agregarOpcion(new OpcionMenu("Agregar CCSS"));
	agregarOpcion(new OpcionMenu("Agregar Maternidad"));
	agregarOpcion(new OpcionMenu("Agregar Renta"));
	agregarOpcion(new OpcionMenu("Agregar Embargo"));
	agregarOpcion(new OpcionMenu("Agregar Deducci�n Fija"));
	agregarOpcion(new OpcionMenu("Agregar Deducci�n Porcentual"));
	agregarOpcion(new OpcionMenu("Regresar al men� principal"));
}

void SubmenuDeducciones::lanzar(int posicion)
{
	switch (posicion) {
	case 1:
		// L�gica para agregar CCSS
		imprimir("Agregando CCSS...");
		break;
	case 2:
		// L�gica para agregar Maternidad
		imprimir("Agregando Maternidad...");
		break;
	case 3:
		// L�gica para agregar Renta
		imprimir("Agregando Renta...");
		break;
	case 4:
		// L�gica para agregar Embargo
		imprimir("Agregando Embargo...");
		break;
	case 5:
		// L�gica para agregar Deducci�n Fija
		imprimir("Agregando Deducci�n Fija...");
		break;
	case 6:
		// L�gica para agregar Deducci�n Porcentual
		imprimir("Agregando Deducci�n Porcentual...");
		break;
	case 7:
		gestor->mostrarMenuPrincipal();
		return;
	default:
		imprimir("Opci�n no v�lida");
		break;
	}
	enter();
	this->show();
}



//void consola::submenu2()
//{
//	if (colab == nullptr) {
//		cout << "Debe registrar un colaborador primero(opcion 1)." << endl;
//		system("pause");
//		return;
//
//	}
//
//	/*DeduccionConcretaBuilder builder;*/
//	DeduccionDirector director;
//
//	int opcion;
//	do {
//		cout << "\n--- SUBMENU DEDUCCIONES ---\n";
//		cout << "1. Agregar CCSS\n";
//		cout << "2. Agregar Maternidad\n";
//		cout << "3. Agregar Renta\n";
//		cout << "4. Agregar Embargo\n";
//		cout << "5. Agregar Deducci�n Fija\n";
//		cout << "6. Agregar Deducci�n Porcentual\n";
//		cout << "0. Salir y aplicar deducciones\n";
//		cout << "Seleccione una opcion: ";
//		cin >> opcion;
//		switch (opcion) {
//		case 1:
//			director.construirEmpleadoCCSS(builder);
//			
//			cout << "CCSS agregado." << endl;
//			system("pause");
//			system("cls");
//			break;
//		case 2:
//			director.construirEmpleadoMaternidad(builder);
//			break;
//		case 3:
//			director.construirEmpleadoRenta(builder);
//			system("pause");	
//			system("cls");
//			cout << "Renta agregado." << endl;
//			break;
//		case 4:
//			director.construirEmpleadoEmbargos(builder);
//			break;
//		case 5:
//			director.construirEmpleadoFija(builder);
//			break;
//		case 6:
//			director.construirEmpleadoPorcentual(builder);
//			break;
//		case 0:
//			break;
//		default:
//			cout << "Opci�n no v�lida.\n";
//			break;
//		}
//
//	} while (opcion != 0);
//
//	Deduccion** deducciones = builder.obtenerResultado();
//	int cantidad = builder.obtenerCantidad();
//	
//
//
//	cout << "Deducciones aplicadas al colaborador." << endl;
//	system("pause");
//}

