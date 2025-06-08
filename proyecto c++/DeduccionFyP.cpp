#include "DeduccionFyP.h"
#include "Colaborador.h"
DeduccionFyP::DeduccionFyP(double _monto, int _tipo, Colaborador* c) : monto(monto), tipo(_tipo), Deduccion(c)
{
}

double DeduccionFyP::calcular() const
{
	if (tipo == 1) {
		return  monto;/*monto fijo*/
	}
	else {
		if (tipo == 2) {
			return colab->getSalarioBase() * (monto / 100);/*porcentaje*/
		}
	}
	return 0;
}

string DeduccionFyP::obtenerNombre() const
{
	if (tipo == 1) {
		return string("Deduccion por monto fijo");
	}
	else {

		return string("Deduccion por porcentaje");
	}
	
}