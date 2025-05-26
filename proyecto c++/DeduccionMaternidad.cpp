#include "DeduccionMaternidad.h"

DeduccionMaternidad::DeduccionMaternidad(double _porcentaje) : porcentaje(_porcentaje)
{
}

double DeduccionMaternidad::calcular(double salarioBruto, double) const
{
	return salarioBruto * 0.5;
}

string DeduccionMaternidad::obtenerNombre() const
{
	return string("Deduccion por Maternidad");
}
