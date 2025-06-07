#include "SubmenuIngresos.h"

SubmenuIngresos::SubmenuIngresos(Control* _gestor) : Consola() {
	gestor = _gestor;
	setTitulo("GESTION DE INGRESOS");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");
	agregarOpcion(new OpcionMenu("Agregar Bonificaciones"));
	agregarOpcion(new OpcionMenu("Agregar Horas Ordinarias"));
	agregarOpcion(new OpcionMenu("Agregar Horas Extra"));
	agregarOpcion(new OpcionMenu("Agregar Horas Dobles"));
	agregarOpcion(new OpcionMenu("Agregar Horas Feriado"));
	agregarOpcion(new OpcionMenu("Regresar al menú principal"));
}

void SubmenuIngresos::lanzar(int posicion) {
	Ingresos* in;
	Colaborador* col = nullptr;
	bool operacionCancelada = false;
	if (posicion >= 1 && posicion <= 5) {
		while (true) {
			string cedula = leerString("Ingrese la cedula del colaborador (o escriba 'cancelar' para volver):");

			if (cedula == "cancelar") {
				operacionCancelada = true;
			}
			col = gestor->buscarColaborador(cedula);
			if (col) {
				Builder director(col);
				switch (posicion) {
				case 1: {
					imprimir("Digite el tipo de Bonificacion desea agregar (1.Fija,2.Porcentual");
					int op = leerEntero("Digite una de las anteriores opciones.");
					if (op == 1) {
						double boni = leerDouble("Digite el monto fijo de bonificacion que desea asignar.");
						director.agregarIngreso(1, 1, boni);
						imprimir("Agregando Bonificaciones de monto Fijo...");
						break;
					}
					else if (op == 2) {
						double boniP = leerDouble("Digite el Porcentaje  de bonificacion que desea asignar.");
						director.agregarIngreso(1, 2, boniP);
						imprimir("Agregando Bonificacion por Porcentaje ...");
						break;

					}
					imprimir("Intentelo en otra acasion...");

					break;
				}
				case 2: {
					imprimir("Digite el tipo de horas Ordinarias Laburadas (1.Diurna,2.Mixto,3.Nocturno");
					int opt = leerEntero("Digite una de las anteriores opciones.");
					if (opt == 1) {

						double ordi = leerDouble("Digite la cantidad de horas ordinarias Diurnas laburadas");

						director.agregarIngreso(2, 1, ordi);
						imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
						break;
					}
					else if (opt == 2) {
						double mixtoOr = leerDouble("Dijite la cantidad de horas diurnas Mixtas laburadas");
						director.agregarIngreso(2, 2, mixtoOr);
						imprimir("Agregando Horas Extra Ordinarias Mixtas...");

						break;
					}
					else if (opt == 3) {

						double horasNoc = leerDouble("Digite la cantidad de horas diurnas Nocturnas laburadas");
						director.agregarIngreso(2, 3, horasNoc);
						imprimir("Agregando Horas Extra Ordinarias Nocturas...");
						break;
					}
					imprimir("Intentelo en otra acasion...");

					break;

				}
				case 3: {
					imprimir("Digite el tipo de horas Extra Laburadas (1.Diurna,2.Mixto,3.Nocturno");
					int opt2 = leerEntero("Digite una de las anteriores opciones.");
					if (opt2 == 1) {

						double extra = leerDouble("Digite la cantidad de horas extra Diurnas laburadas");
						director.agregarIngreso(3, 1, extra);
						imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
						break;
					}
					else if (opt2 == 2) {
						double mixtoEx = leerDouble("Dijite la cantidad de horas extra Mixtas laburadas");
						director.agregarIngreso(3, 2, mixtoEx);
						imprimir("Agregando Horas Extra Ordinarias Mixtas...");

						break;
					}
					else if (opt2 == 3) {

						double horasNocEx = leerDouble("Digite la cantidad de horas extra Nocturnas laburadas");
						director.agregarIngreso(3, 2, horasNocEx);
						imprimir("Agregando Horas Extra Ordinarias Nocturas...");
						break;
					}
					imprimir("Agregando Horas Feriado...");
					break;
				}
				case 4: {
					imprimir("Digite el tipo de horas Dobles Laburadas (1.Diurna,2.Mixto,3.Nocturno");
					int opt3 = leerEntero("Digite una de las anteriores opciones.");
					if (opt3 == 1) {

						double ordiDoble = leerDouble("Digite la cantidad de horas Dobles Diurnas laburadas");
						director.agregarIngreso(4, 1, ordiDoble);
						imprimir("Agregando Horas Dobles Ordinarias Diurnas ...");
						break;
					}
					else if (opt3 == 2) {
						double mixtoDo = leerDouble("Dijite la cantidad de horas Dobles Mixtas laburadas");
						director.agregarIngreso(4, 2, mixtoDo);
						imprimir("Agregando Horas Dobles Ordinarias Mixtas...");

						break;
					}
					else if (opt3 == 3) {

						double horasNoc = leerDouble("Digite la cantidad de horas diurnas Nocturnas laburadas");
						director.agregarIngreso(4, 3, horasNoc);
						imprimir("Agregando Horas Dobles Ordinarias Nocturas...");
						break;
					}

					imprimir("Agregando Horas Ordinarias...");
					break;
				}
				case 5: {
					imprimir("Digite el tipo de horas Feriado Laburadas (1.Oridnario,2.Extra");
					int opt4 = leerEntero("Digite una de las anteriores opciones.");
					if (opt4 == 1) {

						double ordiFe = leerDouble("Digite la cantidad de horas ferido Ordinarias laburadas");
						director.agregarIngreso(5, 1, ordiFe);
						imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
						break;
					}
					else if (opt4 == 2) {
						double extraFe = leerDouble("Dijite la cantidad de horas Feriado Extra laburadas");
						director.agregarIngreso(5, 2, extraFe);
						imprimir("Agregando Horas Extra Ordinarias Mixtas...");

						break;
					}
					imprimir("Agregando Ingreso Porcentual...");
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
	else if (posicion == 6) {
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