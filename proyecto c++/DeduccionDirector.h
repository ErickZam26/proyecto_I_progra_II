#pragma once
#include "Colaborador.h"
#include "FactoryDeduccion.h"
#include "FactoryIngresos.h"

class DeduccionDirector
{
private:
	FactoryDeduccion* deduccion;
	IngresosFactory* ingresos;
	Colaborador* colab;
public:
	DeduccionDirector(Colaborador* c);

	virtual DeduccionDirector* construirEmpleadoCCSS();
	virtual DeduccionDirector* construirEmpleadoMaternidad();
	virtual DeduccionDirector* construirEmpleadoRenta();
	virtual DeduccionDirector* construirEmpleadoEmbargos();
	virtual DeduccionDirector* construirEmpleadoFyP(const int valor1, const int valor2);

	virtual FactoryDeduccion* buildDeduccionDirector();


	virtual DeduccionDirector* construirEmpleadoBonificaciones(const int valor1, const int valor2);
	virtual DeduccionDirector* construirEmpleadoHorasDobles(const int valor);
	virtual  DeduccionDirector* construirEmpleadoHorasExtra(const int valor);
	virtual  DeduccionDirector* construirEmpleadoHorasFeriado(const int valor);
	virtual DeduccionDirector* construirEmpleadoHorasOrdinarias(const int valor);

	virtual IngresosFactory* buildIngresos();


};
