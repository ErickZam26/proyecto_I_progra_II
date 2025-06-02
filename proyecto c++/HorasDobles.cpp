#include "HorasDobles.h"
HorasDobles::HorasDobles(int h, Colaborador* c) : Ingresos(c)
{
	horario = h;
}

float HorasDobles::calcularSalario() const
{
	if (horario == 1) {
		return colab->getSalarioBase() * 2;/*diurno*/
	}
	else {
		if (horario == 2) {
			return colab->getSalarioBase() * 2 * (8 / 7);/*mixto*/
		}
		else {
			if (horario == 3) {
				return colab->getSalarioBase() * 2 * (8 / 6);/*nocturno*/
			}

		}
	}
	return 0;
}