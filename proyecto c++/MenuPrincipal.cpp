#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Control* _gestor) {
	gestor = _gestor;
	setTitulo("SISTEMA REGISTRO DE COLABORADORES");
	setInstrucciones("Ver 2025.05.26");

	agreagarOpcion("Ingrear al menu de personas");
	agreagarOpcion("Prueba 1");
	agreagarOpcion("Salir del sistema");
}

void MenuPrincipal::lanzar(int pos) {
	if (pos == 1) {
		gestor->mostrarMenuPersona();
	}
	else if (pos == 2) {

	}
	else {
		// Cerrar
	}
}
