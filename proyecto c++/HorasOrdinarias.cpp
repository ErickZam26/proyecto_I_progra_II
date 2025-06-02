#include "HorasOrdinarias.h"

HorasOrdinarias::HorasOrdinarias(int h, Colaborador* c) : Ingresos(c)
{
	horario = h;
}

float HorasOrdinarias::calcularSalario() const
{
	if (horario == 1) {
		return colab->getSalarioBase();/*diurno*/
	}
	else {
		if (horario == 2) {
			return colab->getSalarioBase() * (8 / 7);/*mixto*/
		}
		else {
			if (horario == 3) {
				return colab->getSalarioBase() * (8 / 6);/*nocturno*/
			}

		}
	}
	return 0;
}
