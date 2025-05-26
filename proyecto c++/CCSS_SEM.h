#pragma once
#include "Deduccion.h"
using namespace std;
class CCSS_SEM : public Deduccion
{
public:
	
	virtual double calcular(double salarioBruto, double) const override;
	virtual string obtenerNombre() const override;
};

