#include "HorasOrdinarias.h"
#include "Colaborador.h"
HorasOrdinarias::HorasOrdinarias(int h, Colaborador* c) : Ingresos(c)
{
	horario = h;
}

double HorasOrdinarias::calcularSalario() const
{
	double salarioHora = colab->getSalarioBase() / 8;
	if (horario == 1) {
		return colab->getSalarioBase();/*diurno*/
	}
	else {
		if (horario == 2) {
			return salarioHora * (8.0 / 7.0);/*mixto*/
		}
		else {
			if (horario == 3) {
				return salarioHora * (8.0 / 6.0);/*nocturno*/
			}

		}
	}
	return 0;
}

string HorasOrdinarias::obtenerNombre() const
{
	if (horario == 1) {
		return string("Horas Ordinarias Diurnas");
	}
		if (horario == 2){
			return string("Horas Ordinarias Mixtas");

	}
		if (horario == 3) {
			return string("Horas Ordinarias Nocturnas");
		}

};
