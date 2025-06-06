#include "SubmenuIngresos.h"

SubmenuIngresos::SubmenuIngresos(Control* _gestor) : consola() {
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
	DeduccionDirector director(col);
	if (posicion >= 1 && posicion <= 5) {
		while (true) {
			string cedula = leerString("Ingrese la cédula del colaborador (o escriba 'cancelar' para volver):");

			if (cedula == "cancelar") {
				this->show();
				return;
			}

			col = gestor->buscarColaborador(cedula);

			if (col) {
				break;
			}

			imprimir("No se encontró ningún colaborador con esa cédula.");
			enter();
		}
	}
	switch (posicion) {
	case 1: {
		imprimir("Digite el tipo de Bonificacion desea agregar (1.Fija,2.Porcentual");
		int op = leerEntero("Digite una de las anteriores opciones.");
		if (op == 1) {
			double boni = leerDouble("Digite el monto fijo de bonificacion que desea asignar.");
			director.construirEmpleadoBonificaciones(1, boni);
			imprimir("Agregando Bonificaciones de monto Fijo...");
			break;
		}
		else if (op == 2) {
			double boniP = leerDouble("Digite el Porcentaje  de bonificacion que desea asignar.");
			director.construirEmpleadoBonificaciones(2, boniP);
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

			director.construirEmpleadoHorasOrdinarias(ordi);
			imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
			break;
		}
		else if (opt == 2) {
			double mixtoOr = leerDouble("Dijite la cantidad de horas diurnas Mixtas laburadas");

			director.construirEmpleadoHorasOrdinarias(mixtoOr);
			imprimir("Agregando Horas Extra Ordinarias Mixtas...");

			break;
		}
		else if (opt == 3) {

			double horasNoc = leerDouble("Digite la cantidad de horas diurnas Nocturnas laburadas");


			director.construirEmpleadoHorasOrdinarias(horasNoc);
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

			director.construirEmpleadoHorasExtra(extra);
			imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
			break;
		}
		else if (opt2 == 2) {
			double mixtoEx = leerDouble("Dijite la cantidad de horas extra Mixtas laburadas");

			director.construirEmpleadoHorasExtra(mixtoEx);
			imprimir("Agregando Horas Extra Ordinarias Mixtas...");

			break;
		}
		else if (opt2 == 3) {

			double horasNocEx = leerDouble("Digite la cantidad de horas extra Nocturnas laburadas");


			director.construirEmpleadoHorasExtra(horasNocEx);
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

			director.construirEmpleadoHorasDobles(ordiDoble);
			imprimir("Agregando Horas Dobles Ordinarias Diurnas ...");
			break;
		}
		else if (opt3 == 2) {
			double mixtoDo = leerDouble("Dijite la cantidad de horas Dobles Mixtas laburadas");

			director.construirEmpleadoHorasDobles(mixtoDo);
			imprimir("Agregando Horas Dobles Ordinarias Mixtas...");

			break;
		}
		else if (opt3 == 3) {

			double horasNoc = leerDouble("Digite la cantidad de horas diurnas Nocturnas laburadas");


			director.construirEmpleadoHorasDobles(horasNoc);
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

			director.construirEmpleadoHorasFeriado(ordiFe);
			imprimir("Agregando Horas Extra Ordinarias Diurnas ...");
			break;
		}
		else if (opt4 == 2) {
			double extraFe = leerDouble("Dijite la cantidad de horas Feriado Extra laburadas");

			director.construirEmpleadoHorasFeriado(extraFe);
			imprimir("Agregando Horas Extra Ordinarias Mixtas...");

			break;
		}
		imprimir("Agregando Ingreso Porcentual...");
		break;
	}
	case 6: {
		gestor->mostrarMenuPrincipal();
		return;
	}
	default:
		imprimir("Opción no válida");
		break;
	}
	enter();
	this->show();
}
