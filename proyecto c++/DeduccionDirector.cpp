#include "DeduccionDirector.h"

DeduccionDirector::DeduccionDirector(Colaborador* c) : colab(c)

{
	deduccion = new FactoryDeduccion();
	ingresos = new IngresosFactory();
}


DeduccionDirector* DeduccionDirector::construirEmpleadoCCSS()
{
	Deduccion* d = deduccion->crearDeduccion(1, colab, 0, 0);
	
	

	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoMaternidad()
{
	deduccion->crearDeduccion(3, colab, 0, 0);
	return this;

}

DeduccionDirector* DeduccionDirector::construirEmpleadoRenta()
{
	deduccion->crearDeduccion(2, colab, 0, 0);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoEmbargos()
{
	deduccion->crearDeduccion(4, colab, 0, 0);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoFyP(const int valor1, const int valor2)
{
	deduccion->crearDeduccion(5, colab, valor1, valor2);
	return this;
}

FactoryDeduccion* DeduccionDirector::buildDeduccionDirector()
{
	return deduccion;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoBonificaciones(const int valor1, const int valor2)
{
	ingresos->crearIngresos(1, colab, valor1, valor2);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoHorasDobles(const int valor)
{

	ingresos->crearIngresos(4, colab, valor, 0);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoHorasExtra(const int valor)
{
	ingresos->crearIngresos(3, colab, valor, 0);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoHorasFeriado(const int valor)
{
	ingresos->crearIngresos(5, colab, valor, 0);
	return this;
}

DeduccionDirector* DeduccionDirector::construirEmpleadoHorasOrdinarias(const int valor)
{
	ingresos->crearIngresos(2, colab, valor, 0);
	return this;
}

IngresosFactory* DeduccionDirector::buildIngresos()
{
	return ingresos;
}
