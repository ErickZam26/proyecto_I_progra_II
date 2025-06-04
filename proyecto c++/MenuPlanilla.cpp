#include "MenuPlanilla.h"

MenuPlanilla::MenuPlanilla(Control* _gestor) : consola() {
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
	/*try {
		do
		{
			switch (posicion) {
			case 1:
				establecerPeriodo();
				break;
			case 2:
				seleccionarColaboradores();
				break;
			case 3:
				gestionarIngresosPorColaborador();
				break;
			case 4:
				gestionarDeduccionesPorColaborador();
				break;
			case 5:
				calcularPlanillaPeriodo();
				break;
			case 6:
				mostrarResumenPlanilla();
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
	this->show();*/
}
