#include "DeduccionFija.h"

DeduccionFija::DeduccionFija(double _monto ): monto(_monto)
{
}

double DeduccionFija::calcular( ) const
{
	return colab->getSalarioBase() * monto;
}

string DeduccionFija::obtenerNombre() const
{
	return string("Deduccion fija");
}
