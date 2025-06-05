#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Control* _gestor) {
gestor = _gestor;
setTitulo("SISTEMA REGISTRO DE COLABORADORES");
setInstrucciones("Ver 2025.05.26");

agregarOpcion("Ingresar al menu de registro de empleados");
agregarOpcion("Generacion de plantilla por periodo");
agregarOpcion("Guardar Datos");
agregarOpcion("Ingresar al menu de deducciones");
agregarOpcion("Ingresar al menu de ingresos");
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
			gestor->mostrarMenuPlanilla();
			break;
		case 3:
			gestor->mostrarMenuArchivos();
			break;
		case 4:
			gestor->mostrarSubmenuDeducciones();
			break;
		case 5:
			gestor->mostrarSubmenuIngresos();
			break;
		case 6:
			cout << "Saliendo del sistema..." << endl;
			exit(0);
			break;
		}
		enter();
	} while (true);
	
}