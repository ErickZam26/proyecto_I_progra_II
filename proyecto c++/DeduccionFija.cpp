#include "DeduccionFija.h"

DeduccionFija::DeduccionFija(double m ): monto(m)
{
}

double DeduccionFija::calcular(double salarioBase) const
{
	return salarioBase * monto;
}

string DeduccionFija::obtenerNombre() const
{
	return string("Deduccion fija");
}
