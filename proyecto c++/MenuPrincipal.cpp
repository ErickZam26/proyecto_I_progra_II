#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Control* _gestor) {
	gestor = _gestor;
	setTitulo("SISTEMA REGISTRO DE COLABORADORES");
	setInstrucciones("Ver 2025.05.26");

	agreagarOpcion("Ingrear al menu de registro de empleados") << endl;
	agreagarOpcion("Menu de bonificaciones y deducciones") << endl;
	agreagarOpcion("Generacion de plantilla por periodo") << endl;
	agreagarOpcion("Guardar Datos") << endl;
	agreagarOpcion("Salir del sistema");
}


void MenuPrincipal::lanzar(int pos) {
	if (pos == 1) {
		gestor->
	}
	else if (pos == 2) {

	}
	else {
		// Cerrar
	}
}
