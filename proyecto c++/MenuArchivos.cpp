#include "MenuArchivos.h"

MenuArchivos::MenuArchivos(Control* _gestor)

{
	gestor = _gestor;
	setTitulo("GESTION DE Archivos");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

	agregarOpcion(new OpcionMenu("Guardar colaborador"));
	agregarOpcion(new OpcionMenu("Guardar planilla "));
	agregarOpcion(new OpcionMenu("Cargar Datos "));
	agregarOpcion(new OpcionMenu("Regresar al menú principal"));
}

void MenuArchivos::lanzar(int posicion)
{




}
