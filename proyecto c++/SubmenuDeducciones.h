#pragma once
#include "consola.h"
#include "Control.h"
class Cotrol;
class SubmenuDeducciones : public consola
{
private:
	Control* gestor;
public:
	SubmenuDeducciones(Control* _gestor);
	void lanzar(int posicion) override;
};

