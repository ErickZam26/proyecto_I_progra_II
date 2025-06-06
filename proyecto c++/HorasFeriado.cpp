#include "HorasFeriado.h"
HorasFeriado::HorasFeriado(int t, Colaborador* c) : Ingresos(c)
{
	tipo = t;
}

float HorasFeriado::calcularSalario() const
{
	double salarioHora = colab->getSalarioBase() / 8;// 5000 , 4 * 
	if (tipo == 1) {
		return salarioHora;/*ordinario*/
	}
	else {
		if (tipo == 2) {
			return salarioHora * 3;/*extras*/
		}
	}
	return 0;
}