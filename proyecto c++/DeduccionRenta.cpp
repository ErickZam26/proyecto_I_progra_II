#include "DeduccionRenta.h"

double DeduccionRenta::calcular(double, double salarioNetoParcial) const
{
	if (salarioNetoParcial <= 922.000) {
		return salarioNetoParcial;
	}
	else if (salarioNetoParcial >= 922001 && salarioNetoParcial <= 1352000) {
		return salarioNetoParcial - (salarioNetoParcial * 0.10);
	}
	else if (salarioNetoParcial >= 1.352001 && salarioNetoParcial <= 2373000) {
		return salarioNetoParcial - (salarioNetoParcial * 0.15);
	}
	else if (salarioNetoParcial >= 2373001 && salarioNetoParcial <= 4745000) {
		return salarioNetoParcial - (salarioNetoParcial * 0.20);
	}
	else if (salarioNetoParcial > 4745000) {
		return salarioNetoParcial - (4745000 * 0.25);

	}
}

string DeduccionRenta::obtenerNombre() const
{
	return string("Deduccion sobre la Renta");
}
