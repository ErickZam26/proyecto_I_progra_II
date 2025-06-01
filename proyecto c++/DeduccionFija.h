#pragma once
#include "Deduccion.h"
class DeduccionFija : public Deduccion
{
private:
	double monto;
	
public:
	DeduccionFija(double _monto);
	virtual double calcular() const override;
	virtual string obtenerNombre() const override;
};

