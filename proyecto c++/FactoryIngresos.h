#pragma once
#include "Ingresos.h"


class IngresosFactory {
private:
public:

	static Ingresos* crearIngresos(int tipo, Colaborador* colab, int valor1 = 0, float valor2 = 0.0f);
};

