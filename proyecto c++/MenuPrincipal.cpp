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

	do
	{
		switch (pos) {
		case 1:
			gestor->mostrarMenuColaborador();
			break;
		case 2:
			// Implementar lógica para el menú de bonificaciones y deducciones
			cout << "Funcionalidad de bonificaciones y deducciones aún no implementada." << endl;
			break;
		case 3:
			// Implementar lógica para la generación de plantilla por periodo
			cout << "Funcionalidad de generación de plantilla por periodo aún no implementada." << endl;
			break;
		case 4:
			// Implementar lógica para guardar datos
			cout << "Funcionalidad de guardar datos aún no implementada." << endl;
			break;
		case 5:
			cout << "Saliendo del sistema..." << endl;
			exit(0);
			break;
		}
		enter();
	} while (true);
	
}