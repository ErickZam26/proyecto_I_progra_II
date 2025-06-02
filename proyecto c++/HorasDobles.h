#pragma once
#include "Ingresos.h"
class HorasDobles : public Ingresos
{
private:
	int horario;
public:

	HorasDobles(int h, Colaborador* c);
	virtual float calcularSalario() const override;

};

