#include "MenuColaboradores.h"
#include "Consola.h"

MenuColaboradores::MenuColaboradores(Control* nuevoGestor) {
	gestor = nuevoGestor;

	Consola::setTitulo("ADMINISTRACION DE PERSONAS");
	Consola::setInstrucciones("Por favor, leer con cuidado las siguinetes opciones.");

	agreagarOpcion(new OpcionMenu("Crear persona"));
	agreagarOpcion(new OpcionMenu("Editar persona"));
	agreagarOpcion(new OpcionMenu("Listar personas"));
	agreagarOpcion(new OpcionMenu("Libros asociados"));
	agreagarOpcion(new OpcionMenu("Regresar al menu"));
}

void MenuColaboradores::lanzar(int posicion) {
	if (posicion == 1) {
		try {
			imprimir("Creando persona");
			string cedula = leerString("Por favor, digitar cedula:");
			string nombre = leerString("Por favor, digitar nombre:");
			gestor->agregar(new Persona(nombre, cedula));
		}
		catch (exception ex) {
			imprimir(ex.what());
			enter();
		}
		show();
	}
	else if (posicion == 2) {
		imprimir("Editando persona");
	}
	else if (posicion == 3) {
		imprimir("Listando");

	}
	else if (posicion == 4) {
		string cedula = leerString("Cedula de la persona: ");
		Persona* encontrada = gestor->buscarPersona(cedula);
		gestor->mostrarMenuRenta(encontrada);

	}
	else if (posicion == 5) {
		gestor->mostrarMenuPrincipal();
	}
}
