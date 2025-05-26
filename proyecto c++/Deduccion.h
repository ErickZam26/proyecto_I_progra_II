#pragma once
#include <iostream>
#include "ListaColaboradores.h"
using namespace std;
class Deduccion
{
private:


public:

	virtual  double calcular(double salarioBase) const = 0;
	virtual string obtenerNombre() const = 0;
	virtual ~Deduccion() = default;

};

