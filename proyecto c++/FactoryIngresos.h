#pragma once
#include "Ingresos.h"
#include "TipoIngreso.h"

class IngresosFactory {
public:
	static Ingresos* crearIngresos(TipoIngreso tipo, Colaborador* colab, int valor1 = 0, float valor2 = 0.0f);
};

