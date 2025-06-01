#pragma once
#include "Deduccion.h"
//#include "Ingresos"
class FactoryMetod
{
public:
	virtual Deduccion* crearDeduccion(string& tipo) const = 0;
};

