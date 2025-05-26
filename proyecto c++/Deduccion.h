#pragma once
#include <iostream>
using namespace std;
class Deduccion
{
private:

public:

	virtual  double calcular(double salarioBruto, double salarioNetoParcial) const = 0;
	virtual string obtenerNombre() const = 0;
	virtual ~Deduccion() = default;

};

