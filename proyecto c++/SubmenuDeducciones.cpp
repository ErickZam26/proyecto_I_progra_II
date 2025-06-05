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
	Deduccion* d = nullptr;
	Colaborador* c = nullptr;
	
	if (posicion >= 1 && posicion <= 5) {
		while (true) {
			string cedula = leerString("Ingrese la c�dula del colaborador (o escriba 'cancelar' para volver):");

			if (cedula == "cancelar") {
				this->show();
				return;
			}

			c = gestor->buscarColaborador(cedula);
			if (c != nullptr) {
				break; 
			}

			imprimir("No se encontr� ning�n colaborador con esa c�dula.");
			enter();
		}
	
	}	switch (posicion) {

	case 1: {
		// L�gica para agregar CCSS
		d = FactoryDeduccion::crearDeduccion(1, c, 0, 0);
		imprimir("Agregando CCSS...");
		break;
	}
	case 2: {
		d = FactoryDeduccion::crearDeduccion(3, c, 0, 0);
		imprimir("Agregando Maternidad...");
		break;
	}
	case 3:
	{
		d = FactoryDeduccion::crearDeduccion(2, c, 0, 0);
		imprimir("Agregando Renta...");
		break;
	}
	case 4: {
		d = FactoryDeduccion::crearDeduccion(4, c, 0, 0);
		imprimir("Agregando Embargo...");
		break;
	}
	case 5: {
		double deduccionFija = leerDouble("Digite el monto de deduccion que desea aplicar.");
		d = FactoryDeduccion::crearDeduccion(5, c, 1, deduccionFija);
		imprimir("Agregando Deducci�n Fija...");
		system("pause");
		break;
	}
	case 6: {
		double deduccionPorcentual = leerDouble("Digite el porcentaje de deduccion que desea aplicar.");
		d = FactoryDeduccion::crearDeduccion(5, c, 2, deduccionPorcentual);
		imprimir("Agregando Deducci�n Porcentual...");
		system("pause");
		break;
	}
	case 7: {
		gestor->mostrarMenuPrincipal();
		return;
	}
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

