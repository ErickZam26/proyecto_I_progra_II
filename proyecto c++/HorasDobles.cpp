#include "HorasDobles.h"
#include "Colaborador.h"
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

string HorasDobles::obtenerNombre() const
{
	if (horario == 1) {
		return string("Horas Dobles Diurnas");
	}
	if (horario == 2) {
		return string("Horas Dobles Mixtas");

	}
	if (horario == 3) {
		return string("Horas Dobles Nocturnas");
	}
}
