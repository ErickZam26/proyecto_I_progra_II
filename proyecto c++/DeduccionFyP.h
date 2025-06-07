#pragma once
#include "Deduccion.h"
class DeduccionFyP : public Deduccion
{
private:
	double monto;
	int tipo;
public:
	DeduccionFyP(double _monto, int _tipo, Colaborador* c);
	virtual double calcular() const override;
	virtual string obtenerNombre() const override;
};
