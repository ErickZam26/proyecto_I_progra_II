#include "HorasFeriado.h"
HorasFeriado::HorasFeriado(int t, Colaborador* c) : Ingresos(c)
{
	tipo = t;
}

float HorasFeriado::calcularSalario() const
{
	if (tipo == 1) {
		return colab->getSalarioBase();/*ordinario*/
	}
	else {
		if (tipo == 2) {
			return colab->getSalarioBase() * 3;/*extras*/
		}
	}
	return 0;
}