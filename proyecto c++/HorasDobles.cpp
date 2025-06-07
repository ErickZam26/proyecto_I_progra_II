#include "HorasDobles.h"
HorasDobles::HorasDobles(int h, Colaborador* c) : Ingresos(c)
{
	horario = h;
}

double HorasDobles::calcularSalario() const
{
	double salarioHora = colab->getSalarioBase() / 8;// 5000 , 4 * 
	if (horario == 1) {
		return salarioHora * 2;/*diurno*/
	}
	else {
		if (horario == 2) {
			return salarioHora * 2 * (8.0 / 7.0);/*mixto*/
		}
		else {
			if (horario == 3) {
				return salarioHora * 2 * (8.0 / 6.0);/*nocturno*/
			}

		}
	}
	return 0;
}