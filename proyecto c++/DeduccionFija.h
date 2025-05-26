#pragma once
#include "Deduccion.h"
class DeduccionFija : public Deduccion
{
private:
	double monto;
	
public:
	DeduccionFija(double);
	virtual double calcular(double salarioBase) const override;
	virtual string obtenerNombre() const override;
};

