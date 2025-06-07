#include "MenuPlanilla.h"

MenuPlanilla::MenuPlanilla(Control* _gestor) : Consola() {
	gestor = _gestor;
	setTitulo("GESTION DE PLANILLAS");
	setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

	agregarOpcion(new OpcionMenu("Establecer periodo de planilla"));
	agregarOpcion(new OpcionMenu("Seleccionar colaboradores para el periodo"));
	agregarOpcion(new OpcionMenu("Gestionar ingresos por colaborador"));
	agregarOpcion(new OpcionMenu("Gestionar deducciones por colaborador"));
	agregarOpcion(new OpcionMenu("Calcular planilla del periodo"));
	agregarOpcion(new OpcionMenu("Ver resumen de planilla"));
	agregarOpcion(new OpcionMenu("Regresar al menu principal"));
}

void MenuPlanilla::lanzar(int posicion)
{
	try {
		do
		{
			switch (posicion) {
			case 1:
				/*establecerPeriodo();*/
				break;
			case 2:
				/*seleccionarColaboradores();*/
				break;
			case 3:
				/*gestionarIngresosPorColaborador();*/
				gestor->mostrarSubmenuIngresos();
				break;
			case 4:
				/*	gestionarDeduccionesPorColaborador();*/
				gestor->mostrarSubmenuDeducciones();
				break;
			case 5:
				/*	calcularPlanillaPeriodo();*/
				break;
			case 6:
				/*mostrarResumenPlanilla();*/
				break;
			case 7:
				gestor->mostrarMenuPrincipal();
				return;
			default:
				imprimir("Opción no válida");
				break;
			}

			enter();
		} while (true);
	}
	catch (exception& ex) {
		imprimir(ex.what());
	}
	enter();
	this->show();
}

void MenuPlanilla::establecerPeriodo()
{

	periodoActual = leerString("Ingrese el preriodo Planilla (XXXX,MM):");
	imprimir("Preriodo establecido: " + periodoActual);
}

void MenuPlanilla::seleccionarColaboradores()
{
	if (periodoActual.empty()) {
		imprimir("Primero debe establecer el periodo");
	}
	imprimir("Seleccionando colaboradores para " + periodoActual);
	string cedula = leerString("Dijete el numero de cedula del colaborador.");

}

void MenuPlanilla::gestionarIngresosPorColaborador()
{
	if (periodoActual.empty() || colaboradoresDelPeriodo == nullptr) {
		imprimir("Primero establezca periodo y seleccione colaboradores");
	}

	gestor->mostrarSubmenuIngresos();
}

void MenuPlanilla::gestionarDeduccionesPorColaborador()
{
	if (periodoActual.empty() || colaboradoresDelPeriodo == nullptr) {
		imprimir("Primero establezca periodo y seleccione colaboradores");
	}

	gestor->mostrarSubmenuDeducciones();
}

void MenuPlanilla::calcularPlanillaPeriodo()
{
	if (periodoActual.empty() || colaboradoresDelPeriodo == nullptr) {
		imprimir("Configuración incompleta para cálculo");
	}

	imprimir("Calculando planilla para " + periodoActual);
}

void MenuPlanilla::mostrarResumenPlanilla()
{

}

