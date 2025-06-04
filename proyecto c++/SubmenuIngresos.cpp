#include "SubmenuIngresos.h"

SubmenuIngresos::SubmenuIngresos(Control* _gestor) : consola() {
	gestor = _gestor;
	setTitulo("GESTION DE INGRESOS");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");
	agregarOpcion(new OpcionMenu("Agregar Ingreso Fijo"));
	agregarOpcion(new OpcionMenu("Agregar Ingreso Porcentual"));
	agregarOpcion(new OpcionMenu("Regresar al menú principal"));
}

void SubmenuIngresos::lanzar(int posicion) {
	switch (posicion) {
	case 1:
		imprimir("Agregando Ingreso Fijo...");
		break;
	case 2:
		imprimir("Agregando Ingreso Porcentual...");
		break;
	case 3:
		gestor->mostrarMenuPrincipal();
		return;
	default:
		imprimir("Opción no válida");
		break;
	}
	enter();
	this->show();
}
