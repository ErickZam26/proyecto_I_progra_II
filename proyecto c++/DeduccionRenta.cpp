#include "DeduccionRenta.h"
DeduccionRenta::DeduccionRenta()
{
}
double DeduccionRenta::calcular() const
{
	double impuesto = 0;
	double salarioBase = colab->getSalarioBase();
	if (salarioBase > 4745000) {
		impuesto += (salarioBase - 4745000) * 0.25;
		salarioBase = 4745000;
	}
	
		if (salarioBase > 2373000) {
			impuesto += (salarioBase - 2373000) * 0.20;
			salarioBase = 2373000;
		}
		if (salarioBase > 1352000) {
			impuesto += (salarioBase - 1352000) * 0.15;
			salarioBase = 1352000;
		}
		if (salarioBase > 922000) {
			impuesto += (salarioBase - 922000) * 0.10;
			salarioBase = 922000;
		}
		return impuesto;
	
}



string DeduccionRenta::obtenerNombre() const
{
	return string("Deduccion sobre la Renta");
}
