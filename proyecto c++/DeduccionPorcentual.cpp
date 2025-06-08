#include "DeduccionPorcentual.h"
#include "Colaborador.h"
DeduccionPorcentual::DeduccionPorcentual(double _porcentaje, Colaborador* c): Deduccion(c), porcentaje(_porcentaje)
{
}

double DeduccionPorcentual::calcular() const
{
	return colab->getSalarioBase() * (porcentaje / 100);
}

string DeduccionPorcentual::obtenerNombre() const
{
	return string("Deduccion Porcentual");
}
