#pragma once  
#include "Deduccion.h"  
class CCSS_Deduccion : public Deduccion
{
private:
	double SEM;
	double IVM;
	double IPT;
public:
	CCSS_Deduccion(Colaborador* c);
	virtual double calcular() const override;
	virtual string obtenerNombre() const override;

	double getSEM();
	double getIVM();
	double getLPT();
};
