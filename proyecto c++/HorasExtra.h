#pragma once
#include"Ingresos.h"
class HorasExtra : public Ingresos
{
private:
	int horario;

public:
	HorasExtra(int h, Colaborador* c);
	virtual double calcularSalario() const override;
	virtual string obtenerNombre() const override;
};


