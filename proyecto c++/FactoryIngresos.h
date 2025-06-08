#pragma once
#include "Ingresos.h"

class Ingresos;

class FactoryIngresos {
private:
public:

	static Ingresos* crearIngresos(int tipo, Colaborador* colab, int valor1 = 0, double valor2 = 0.0f);
};
