#pragma once
#include "Nomina.h"
#include "Ingresos.h"
#include "Deduccion.h"
class Colilla
{
private:
	Nomina* nomina;
	string periodo;
	string fecha;
public:
	void GenerarColilla();
};



