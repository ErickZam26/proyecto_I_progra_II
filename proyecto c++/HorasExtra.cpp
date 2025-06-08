#include "HorasExtra.h"
#include "Colaborador.h"
HorasExtra::HorasExtra(int h, Colaborador* c) : Ingresos(c)
{

	horario = h;
}

double HorasExtra::calcularSalario() const
{

	double salarioHora = colab->getSalarioBase() / 8;// 5000 , 4 * 
	if (horario == 1) { /*diurno*/



		return salarioHora * (3.0 / 2.0);
	}
	else {
		if (horario == 2) {
			return salarioHora * (3.0 / 2.0) * (8.0 / 7.0);/*mixto*/
		}
		else {
			if (horario == 3) {
				return salarioHora * (3.0 / 2.0) * (8.0 / 6.0); /*nocturno*/
			}

		}
	}
	return 0;
}

string HorasExtra::obtenerNombre() const
{
	if (horario == 1) {
		return string("Horas Extra Diurnas");
	}
	if (horario == 2) {
		return string("Horas Extra Mixtas");

	}
	if (horario == 3) {
		return string("Horas Extra Nocturnas");
	}
}
