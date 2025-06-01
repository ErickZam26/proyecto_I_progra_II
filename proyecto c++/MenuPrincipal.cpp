#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Control* _gestor) {
gestor = _gestor;
setTitulo("SISTEMA REGISTRO DE COLABORADORES");
setInstrucciones("Ver 2025.05.26");

agregarOpcion("Ingresar al menu de registro de empleados");
agregarOpcion("Menu de bonificaciones y deducciones");
agregarOpcion("Generacion de plantilla por periodo");
agregarOpcion("Guardar Datos");
agregarOpcion("Salir del sistema");
}

void MenuPrincipal::lanzar(int pos) {
if (pos == 1) {
	gestor->mostrarMenuPersona();
}
else if (pos == 2) {
	// Implement functionality for menu option 2
}
else {
	// Cerrar
}
}
