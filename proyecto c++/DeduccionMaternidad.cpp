#include "DeduccionMaternidad.h"

DeduccionMaternidad::DeduccionMaternidad(double _porcentaje) : porcentaje(_porcentaje)
{
}

double DeduccionMaternidad::calcular(double salarioBase) const
{
	double salarioColaborador = salarioBase * 0.5;

	return salarioColaborador * porcentaje;
}

string DeduccionMaternidad::obtenerNombre() const
{
	return string("Deduccion por Maternidad");
}
