#include "HorasExtra.h"

HorasExtra::HorasExtra(int h, Colaborador* c) : Ingresos(c)
{

	horario = h;
}

float HorasExtra::calcularSalario() const
{
	if (horario == 1) { /*diurno*/
		return colab->getSalarioBase() * (3 / 2);
	}
	else {
		if (horario == 2) {
			return colab->getSalarioBase() * (3 / 2) * (8 / 7);/*mixto*/
		}
		else {
			if (horario == 3) {
				return colab->getSalarioBase() * (3 / 2) * (8 / 6); /*nocturno*/
			}

		}
	}
	return 0;
}