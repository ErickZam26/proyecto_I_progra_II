#include "DeduccionEmbargos.h"

DeduccionEmbargos::DeduccionEmbargos(double m) : monto(m)
{
}

double DeduccionEmbargos::calcular(double, double salarioNetoParcial) const
{
	if (salarioNetoParcial == monto * 3) {
		return salarioNetoParcial - (salarioNetoParcial * 12, 5);
	}
	else if (salarioNetoParcial > monto * 3) {
		return salarioNetoParcial - (salarioNetoParcial * 25);
	}
	return 0.0;
}

string DeduccionEmbargos::obtenerNombre() const
{
	return string("Deduccion por Embargo");
}
