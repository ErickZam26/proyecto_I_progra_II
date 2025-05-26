#include "DeduccionFija.h"

DeduccionFija::DeduccionFija(double)
{
}

double DeduccionFija::calcular(double salarioBruto, double) const
{
	return salarioBruto * monto;
}

string DeduccionFija::obtenerNombre() const
{
	return string("Deduccion fija");
}
