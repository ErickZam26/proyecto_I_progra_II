#pragma once
#include "consola.h"
#include "Control.h"
#include "Nomina.h"
class Control;
class MenuPlanilla : public Consola {
private:
	Control* gestor;
	string periodoActual;
	int capacidedadNominas;
	int numNominas;
	Nomina** nominaPeriodo;
	void expandirNominas();
public:
	MenuPlanilla(Control* _gestor);
	void lanzar(int posicion);
	~MenuPlanilla();

	void setPeriodoActual(std::string periodo);
	void agregarNomina(Nomina* nomina);

	void calcularPlanillaPeriodo();
	void mostrarResumenPlanilla();
//private:
	//void establecerPeriodo();
	//void seleccionarColaboradores();
	//void gestionarIngresosPorColaborador();
	//void gestionarDeduccionesPorColaborador();
	//void calcularPlanillaPeriodo();
	//void mostrarResumenPlanilla();

	//// Submenús internos
	//void submenuIngresos(Colaborador* colaborador);
	//void submenuDeducciones(Colaborador* colaborador);
};



