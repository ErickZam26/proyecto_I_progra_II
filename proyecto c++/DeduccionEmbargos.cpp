#include "DeduccionEmbargos.h"

DeduccionEmbargos::DeduccionEmbargos(double _monto) : monto(_monto)
{
}

double DeduccionEmbargos::calcular() const
{
	const double serviosDomesticos = 246624.4;
	const double tasaCargosDomesticos = 0.1067;

	double cargasSociales = colab->getSalarioBase() * monto;
	double salarioNeto = colab->getSalarioBase() - cargasSociales;
	
	double cargarDomesticas = serviosDomesticos * tasaCargosDomesticos;
	double sumaInembargable = serviosDomesticos - cargarDomesticas;
	double tripleInembragable = 3 * sumaInembargable;

	double salarioEmbargable = salarioNeto - sumaInembargable;
		if (salarioEmbargable <= tripleInembragable) {
			return salarioEmbargable * 0.125;
		}
		else {
			return salarioEmbargable * 0.25;
		}
}

string DeduccionEmbargos::obtenerNombre() const
{
	return string("Deduccion por Embargo");
}
