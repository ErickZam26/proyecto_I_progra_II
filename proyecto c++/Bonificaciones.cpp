#include "Bonificaciones.h"
Bonificaciones::Bonificaciones(int t, float m, Colaborador* c) : Ingresos(c)
{
	monto = m;
	tipo = t;
}

float Bonificaciones::calcularSalario() const
{
	if (tipo == 1) {
		return colab->getSalarioBase();/*monto fijo*/
	}
	else {
		if (tipo == 2) {
			return colab->getSalarioBase() * monto;/*porcentaje*/
		}
	}
	return 0;
}