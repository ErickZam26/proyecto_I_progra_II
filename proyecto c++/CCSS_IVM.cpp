#include "CCSS_IVM.h"

double CCSS_IVM::calcular(double salarioBruto, double) const
{
	return salarioBruto * 4.17;
}

string CCSS_IVM::obtenerNombre() const
{
	return string("Deduccion Invalidez, Vejez y Muerte  ");
}
