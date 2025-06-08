#include "DeduccionDirector.h"
DeduccionDirector::DeduccionDirector(Colaborador* colab) : colaborador(colab)
{
	deduccion = new FactoryDeduccion();
	ingresos = new FactoryIngresos();
}

DeduccionDirector& DeduccionDirector::agregarIngreso(int opcion, int tipo, int valor)
{ 
	Ingresos* ingresos = FactoryIngresos::crearIngresos(opcion, colaborador, tipo, valor);
	colaborador->agregarIngreso(ingresos);
	return *this;
}

DeduccionDirector& DeduccionDirector::agregarDeduccion(int opcion, int tipo, int valor)
{
	Deduccion* deduccion = FactoryDeduccion::crearDeduccion(opcion, colaborador, tipo, valor);
	colaborador->agregarDeduccion(deduccion);
	return *this;

}

void DeduccionDirector::construir()
{
	colaborador->calcularSalarioNeto();
}



