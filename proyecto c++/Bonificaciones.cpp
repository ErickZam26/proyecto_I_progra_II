#include "Bonificaciones.h"
#include "Colaborador.h"
Bonificaciones::Bonificaciones(int t, float m, Colaborador* c) : Ingresos(c)
{
	monto = m;
	tipo = t;
}

double Bonificaciones::calcularSalario() const
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

string Bonificaciones::obtenerNombre() const
{
	if (tipo == 1) {
		return string("Bonificacion de monto Fijo ");
	}
	else {
		return string("Bonificacion por porcentaje");
	}
	
}
