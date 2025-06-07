#include "SubmenuDeducciones.h"

SubmenuDeducciones::SubmenuDeducciones(Control* _gestor) : Consola() {
	gestor = _gestor;
	setTitulo("GESTION DE DEDUCCIONES");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

	agregarOpcion(new OpcionMenu("Agregar CCSS"));
	agregarOpcion(new OpcionMenu("Agregar Maternidad"));
	agregarOpcion(new OpcionMenu("Agregar Renta"));
	agregarOpcion(new OpcionMenu("Agregar Embargo"));
	agregarOpcion(new OpcionMenu("Agregar Deducción Fija"));
	agregarOpcion(new OpcionMenu("Agregar Deducción Porcentual"));
	agregarOpcion(new OpcionMenu("Regresar al menú principal"));
}

void SubmenuDeducciones::lanzar(int posicion)
{

	Deduccion* d;
	Colaborador* col = nullptr;
	bool operacionCancelada = false;
	if (posicion >= 1 && posicion <= 6) {
		while (true) {
			string cedula = leerString("Ingrese la cedula del colaborador (o escriba 'cancelar' para volver):");

			if (cedula == "cancelar") {
				operacionCancelada = true;
				break;
			}

			col = gestor->buscarColaborador(cedula);

			if (col) {
				Builder director(col);

				switch (posicion) {

				case 1: {
					//director.agregarDeduccion(1, 0, 0);
					imprimir("Agregando CCSS...");
					break;
				}
				case 2: {
					//director.agregarDeduccion(2, 0, 0);
					/*d = FactoryDeduccion::crearDeduccion(3, col, 0, 0);*/
					imprimir("Agregando Maternidad...");
					break;
				}
				case 3:
				{

					director.agregarDeduccion(3, 0, 0);
					/*	d = FactoryDeduccion::crearDeduccion(2, col, 0, 0);*/
					imprimir("Agregando Renta...");
					break;
				}
				case 4: {
					director.agregarDeduccion(4, 0, 0);
					/*d = FactoryDeduccion::crearDeduccion(4, col, 0, 0);*/
					imprimir("Agregando Embargo...");
					break;
				}
				case 5: {
					int deduccionFija = leerEntero("Digite el monto Fijo de deduccion que desea aplicar.");
					director.agregarDeduccion(5, 1, deduccionFija);
					/*d = FactoryDeduccion::crearDeduccion(5, col, 1, deduccionFija);*/
					imprimir("Agregando Deducción Fija...");
					system("pause");
					break;
				}
				case 6: {
					//Parametro para que no se pasa de un 0 a 100% 
					double deduccionPorcentual = leerDouble("Digite el porcentaje de deduccion que desea aplicar.");
					director.agregarDeduccion(5, 2, deduccionPorcentual);
					/*	d = FactoryDeduccion::crearDeduccion(5, col, 2, deduccionPorcentual);*/
					imprimir("Agregando Deducción Porcentual...");
					system("pause");
					break;
				}
				}
				break;
			}
			else {
				imprimir("No se encontro ningun colaborador con esa cedula.");
				enter();
				int opcion = leerEntero("Desea intentar nuevamente?\n1. Si\n2. No (Volver al menu)", 1, 2);
				if (opcion == 2) {
					operacionCancelada = true;
					break;
				}
			}
		}
	}
	else if (posicion == 7) {
		gestor->mostrarMenuPrincipal();
		return;
	}
	if (operacionCancelada) {
		enter();
		this->show();
	}
	else {
		enter();
		this->show();
	}
}