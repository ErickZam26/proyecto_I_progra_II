#include "DeduccionMaternidad.h"

DeduccionMaternidad::DeduccionMaternidad(double _porcentaje) : porcentaje(_porcentaje)
{
}

double DeduccionMaternidad::calcular( ) const
{
	double salarioColaborador = colab->getSalarioBase() * 0.5;

	return salarioColaborador * porcentaje;
}

string DeduccionMaternidad::obtenerNombre() const
{
	return string("Deduccion por Maternidad");
}
